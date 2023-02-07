#include <iostream>
#include <limits>
#include <vector>

template <typename T>
class MyAllocator {
public:
    typedef size_t    size_type;
    typedef ptrdiff_t difference_type;
    typedef T*        pointer;
    typedef const T*  const_pointer;
    typedef T&        reference;
    typedef const T&  const_reference;
    typedef T         value_type;

    template <typename U>
    struct rebind {
        typedef MyAllocator<U> other;
    };

    MyAllocator() throw() {}
    MyAllocator(const MyAllocator& rhs) throw() {}
    template <typename U> MyAllocator(const MyAllocator<U>& rhs) throw() {}

    ~MyAllocator() throw() {}

    pointer allocate(size_type num, std::allocator<void>::const_pointer hint = 0)
    {
        const std::size_t size = num * sizeof(T);
        pointer const p = static_cast<pointer>(::operator new(size));

        msTotalSize += size;
        return p;
    }

    void deallocate(pointer p, size_type num)
    {
        const std::size_t size = num * sizeof(T);
        msTotalSize -= size;

        ::operator delete(p);
    }

    void construct(pointer p, const T& value)
    {
        new((void*)p) T(value);
    }

    void destroy(pointer p)
    {
        ((T*)p)->~T();
    }

    pointer address(reference value) const { return &value; }
    const_pointer address(const_reference value) const { return &value; }

    size_type max_size() const throw()
    {
        return std::numeric_limits<size_t>::max() / sizeof(T);
    }

    size_type get_total_size() const
    {
        return msTotalSize;
    }

private:
    static size_type  msTotalSize;
};

template <typename T>
typename MyAllocator<T>::size_type MyAllocator<T>::msTotalSize = 0;


template <>
class MyAllocator<void> {
public:
    typedef void*        pointer;
    typedef const void*  const_pointer;
    typedef void         value_type;

    template <typename U>
    struct rebind {
        typedef MyAllocator<U> other;
    };
};

template <typename T1, typename T2>
bool operator==(const MyAllocator<T1>&, const MyAllocator<T2>&) throw()
{
    return true;
}

template <typename T1, typename T2>
bool operator!=(const MyAllocator<T1>&, const MyAllocator<T2>&) throw()
{
    return false;
}


int main()
{
    typedef MyAllocator<int> IntAllocator;
    typedef std::vector<int, IntAllocator> IntAllocatorVector;

    IntAllocator myAllocator;

    // 「サイズ」10 で初期化
    IntAllocatorVector v(10, 0, myAllocator);
    std::cout << myAllocator.get_total_size() << std::endl;

    // 100個の要素を追加
    for (int i = 0; i < 100; ++i) {
        v.push_back(0);
    }
    std::cout << myAllocator.get_total_size() << std::endl;

    // 要素をクリア
    // 「サイズ」は 0 になるが、「容量」は変わらない。
    v.clear();
    std::cout << myAllocator.get_total_size() << std::endl;

    // 「容量」も 0 に切りつめる
    IntAllocatorVector().swap(v);
    std::cout << myAllocator.get_total_size() << std::endl;
}