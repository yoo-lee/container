#include <iostream>
#include <vector>
using namespace std;
#include <iostream>

	template <typename T>
	void swap (T &a, T &b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

int main ()
{

	const int SZ = 10;          // 要素数
    std::vector<int>v(SZ);
    // std::vector<int>::iterator i;
	std::vector<int>s(SZ);
	
	for (auto i = v.begin(); i != v.end(); i++)
	    {
		*i = rand() / 10000000;
		cout << *i << endl;
		}
	auto i = v.begin();
	swap(*i,*(i+1));
}