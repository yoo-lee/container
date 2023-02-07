#include <vector>
#include <iostream>
#include <cassert>


using namespace std;
int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    auto i = std::begin(v) ;

    *i ; // 1
    ++i ;
    *i ; // 2
    ++i ;
    *i ; // 3
}