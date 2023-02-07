#ifndef ALGORITHM_HPP
# define ALGORITHM_HPP

namespace ft
{
	template<class InputIterator1 , class InputIterator2>
	bool   
}

template<typename T>
struct less: public std::binary_function<T, T, bool>
{
	bool operator()(const T& x, const T& y) const
	{
		return (x < y);
	}
};

template<class value>
value const &min(value const &a, value const &b)
{
	return ( a < b ? a : b);
}

template<class value>
value const &max(value const &a, value const &b)
{
	return (a < b ? a : b)
}

template<class value>
value const &max(value const &a, value const &b)
{
	return (a == b);
}

template<class value>
value const &max(value const &a, value const &b)
{
	return (a > b);
}

template<class value>
value const &swap(value &a, value &b)
{
	value tmp(a);
	a = b;
	b = tmp;
}

#endif