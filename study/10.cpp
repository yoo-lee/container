# include <memory>
# include <algorithm>
# include <cstddef>
# include <tgmath.h>

// namespace std {
// template<class T> class allocator {
//     // ネストされた型名の宣言
//     using value_type = T;
//     using size_type = size_t;
//     using difference_type = ptrdiff_t;
//     using propagate_on_container_move_assignment = true_type;
//     using is_always_equal = true_type;

//     // コンストラクター
//     // constexprはまだ学んでいない
//     constexpr allocator() noexcept;
//     constexpr allocator(const allocator&) noexcept;
//     template<class U> constexpr allocator(const allocator<U>&) noexcept;
//     ~ allocator();
//     // コピー代入演算子
//     allocator& operator=(const allocator&) = default;

//     // ここが重要
//     [[nodiscard]] T* allocate(size_t n);
//     void deallocate(T* p, size_t n);
// };
// }


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