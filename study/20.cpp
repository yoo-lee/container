#include <cstddef>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    std::vector<int> v = {1,2,3} ;

    // xは最初の要素を指す
    auto x = std::begin(v) ;
    // yは最後の次の要素を指す
    auto y = std::end(v) ;


    x == y ; // false
    ++x ; // xは最初の次の要素を指す
	cout << *x << endl;
    x == y ; // false
    ++x ; // xは最後の要素を指す
	cout << *x << endl;
    x == y ; // false
    ++x ; // xは最後の次の要素を指す
	cout << *x << endl;
    x == y ; // true
}