#include <ostream>
#include <iostream>
using namespace std;

template<typename T>
class Tix
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
	Tix<int> a.x = 1;
	Tix<double> b.y = 2.22;
	show(a.x, b.y);
	show(a, b);
}