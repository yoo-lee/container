#include <iostream>
 #include <vector>

using namespace std;
#define N 10

int main ()
{
	std::vector<int> v(N);
    std::vector<int>::iterator itr = v.begin();   // 最初の要素を指すイテレータ

	for (int i = 0; i < 10; i++)
	{
		v[i] = rand() % 100;
		std::cout << i<< " = " << v[i] << "\n"; 
		std::cout << i<< " = " << v[i] << "\n"; 
	}
 }