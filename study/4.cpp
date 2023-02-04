#include <iostream>
 #include <vector>

using namespace std;
#define N 10

int main ()
{
	int i = 0;
	std::vector<int> v(N);

	for (int i = 0; i < 10; i++)
	{
		v[i] = rand() % 100;
		std::cout << i<< " = " << v[i] << "\n"; 
	}
    std::vector<int>::iterator itr = v.begin();   // 最初の要素を指すイテレータ
    std::vector<int>::reverse_iterator it = v.rbegin();   // 最初の要素を指すイテレータ
    std::vector<int>::iterator itrr = v.end();   // 最初の要素を指すイテレータ
	
	std::cout << "itr" << " = " << *itr << "\n"; 
	std::cout << "itr" << " = " << *it << "\n"; 
	std::cout << "itrr" << " = " << *itrr << "\n"; 

 }