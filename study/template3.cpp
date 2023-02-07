#include <ostream>
#include <iostream>
using namespace std;

template<typename T>
class Test
{
	public:
	T x;
	T y;
	
	// template<typename T>
	// void show(int x, int y);
};

void show(int x, int y)
{
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

void show(double x, double y)
{
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

int main ()
{
	Test<int> a{1 ,2};
	Test<double> b{1.11 ,2.22};
	show(1.22, 2.22);
}