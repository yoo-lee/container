#include "./vector/vector+++.hpp"

int main()
{
template<class VectorType>
void test_Vector(void)
{
	std::cout << "\n---basic\n\n";
	{
		VectorType empty_vector;
		{
			std::cout << "[begin] == [end] on empty vector" << '\n';
				assert(empty_vector.begin() == empty_vector.end());
			std::cout << "capacity? " << empty_vector.capacity() << '\n';
				assert(empty_vector.capacity() == 0);
			std::cout << "max_size (vector) " << empty_vector.max_size() << '\n';
			std::cout << "empty? " << empty_vector.empty() << '\n';
				assert(empty_vector.empty());
			std::cout << "empty vector size = " << empty_vector.size() << '\n';
				assert(empty_vector.size() == 0);
		}
	}
	}
}