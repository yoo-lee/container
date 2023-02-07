#include <iostream>
#include <stack>
using namespace std;
int main()
{
    std::allocator<std::string> a ;
    // 生のメモリー確保
    // std::string [1]分のメモリーサイズ
    std::string * p = a.allocate(1) ;
    // メモリー解放
	
	cout << *p = "qqqq" << endl; 
    a.deallocate( p, 1 ) ;
}

// std::allocator<std::string> a ;

// string *p = a.allocate(1);

