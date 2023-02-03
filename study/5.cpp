#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void f(typename std::vector<T>::iterator begin, typename std::vector<T>::iterator end)
{
	// ただvectorの中身を表示するだけ
	std::for_each(begin, end, [](const auto& x) { std::cout << x << " "; });
	std::cout << std::endl;
}

typename<typename T>
void f(typename std::vector)
int main()
{
	std::vector<float> v = {1.f, 2.f, 3.f};
	f(v.begin(), v.end());

	return 0;
}