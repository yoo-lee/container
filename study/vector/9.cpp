#include <iostream>
#include <vector>
#include <alloc>

int main()
{
	vector( const allocator_type & alloc ) noexcept
    : alloc( alloc )
	{ }
    std::allocator<int> alloc ;
    // 空
    std::vector<int> v1(alloc) ;
    // 要素数5
    std::vector<int> v2(5, alloc) ;
    要素数5で初期値123
    std::vector<int> v3(5, 123, alloc) ;
}