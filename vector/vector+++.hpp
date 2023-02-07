
#include <memory>
#include <algorithm>
#include <iostream>
//#include <iterator>
using namespace std;

namespace ft
{
	template<typename T>
	class VectorIterator: IteratorTrait
	{
	public:
	typedef T value_type;
	// typedef value_type* pointer;
	// typedef value_type const* const_pointer;
	// typedef value_type& reference;
	// typedef value_type const & const_reference;
protected:
	pointer p;
public:
	VectorIterator() : p(0) {}
	VectorIterator(pointer p) : p(p) {}
	};
}