#include <iostream>
#include <vector>

using namespace std;
int main ()
{
std::vector<int> v{1 , 2 ,3 ,5};
std::vector<int>::iterator i;
	for(i =v.begin(); i <= v.end(); i++)
	{
	cout << *i << endl;
	}
}