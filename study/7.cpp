#include <iostream>
#include <vector>
using namespace std;

void sort(int a, int b)
{
	
}

int main ()
{

	const int SZ = 10;          // 要素数
    std::vector<int>v(SZ);
	std::vector<int>s(SZ);
	
	for (auto i = v.begin(); i != v.end(); i++)
	    {
		*i = rand() / 10000000;
		cout << *i << endl;
		}
	
}
