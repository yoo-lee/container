#include <iostream>
#include <vector>
#include <iostream>
using namespace std;

	template <typename E>
	void swap (E &a, E &b)
	{
		E tmp = a;
		a = b;
		b = tmp;
	}

int main ()
{
	const int SZ = 10;          // 要素数
    std::vector<int>v(SZ);
    std::vector<int>::iterator i;
	
	for (auto i = v.begin(); i != v.end(); i++)
	    {
		*i = rand() / 10000000;
		cout << *i << endl;
		}
	auto i = v.begin();
	swap(*i,*(i+1));
}