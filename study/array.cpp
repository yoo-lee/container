#include <array>

template < Array >
struct array_iterator
{
    using reference = typename Array::reference ;
	// using reference = typename Array::reference ;
	// Array & a ;
    Array & a ;
    std::size_t i ;

    array_iterator( Array * a, std::size_t i )
        : a(a), i(i) { }

    reference operator *() const
    { return a[i] ; }

    array_iterator & operator ++()
    {
        ++i ;
        return *this ;
    }

    reference operator [] ( std::size_t n )
    { return a[i + n] ; }
} ;

using namespace std;
int main ()
{
	array a;
	// array_iterator a;
	// cout << a.i	<< endl;			
}