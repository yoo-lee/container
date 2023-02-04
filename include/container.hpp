#include <cstddef>
#include <string>


namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:
		typedef T	value_type;

		typedef Alloc	allocator_type;
		typedef typename allocator_type::reference	reference;
	}
}
class vector
{
	
}