#include <vector>
using namespace std;
#include <iostream>

int main ()
{

 std::vector<int> data {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    for (int i = 0; i < 10; ++i)
        std::cout << data[i]; 
}