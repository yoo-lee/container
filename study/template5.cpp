#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class Rectangle {
 public:
    Rectangle(T height, T width) : height_(height), width_(width) {}

	T minus() const
	{
		return height_ - width_ ;
	}
    T Area() const {
       return height_ * width_;
    }

 private:
    const T height_;
    const T width_;
};
using namespace std;
int main ()
{
	// Rectangle<int> r1(10, 20);
	Rectangle<int> r1(20, 40);
	Rectangle<double> r2(1.2, 3.4);
	r1.Area();
	cout << r1.Area() << endl;
	cout << r1.minus() << endl;
}