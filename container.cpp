#include "container.hpp"

template < typename T >
struct custom_allocator
{
    // ...
} ;

template < typename T >
using custom_vector = std::vector< T, custom_allocator<T> > ;

// int main()
// {
//     custom_vector<int> v ;
//     // 独自のアロケーターを使ったメモリー確保
//     v.push_back(0) ;
// }

// メモリー確保
[[nodiscard]] T* allocate(size_t n);
// メモリー解放
void deallocate(T* p, size_t n);

int main()
{
    std::allocator<std::string> a ;
    // 生のメモリー確保
    // std::string [1]分のメモリーサイズ
    std::string * p = a.allocate(1) ;
    // 構築
    std::string * s = new(p) std::string("hello") ;
    // 明示的なデストラクター呼び出し
    s->~basic_string() ;
    // メモリー解放
    a.deallocate( p, 1 ) ;
}