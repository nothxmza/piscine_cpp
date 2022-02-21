#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template < typename T >
void	iter(T* tabptr, int length, void f(T const &))
{
	for (int i = 0; i < length; i++)
		f(tabptr[i]);
}

#endif