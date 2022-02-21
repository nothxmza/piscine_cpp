#include "Span.hpp"

Span::Span(unsigned int n) : _max_size(n), _container() 
{
	srand(time(0));
}

Span::Span(const Span &src) 
{
	_max_size = src._max_size;
	_container = src._container;
}

Span::~Span()
{
};

Span &Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	_max_size = src._max_size;
	_container = src._container;
	return (*this);
}

void	Span::addNumber(int x) 
{
	if (_container.size() == _max_size)
		throw ContainerExceededException();
	_container.push_back(x);
}

int	Span::shortestSpan() 
{
	size_t size = _container.size();

	if (size == 0 || size == 1)
		throw SpanNotFoundException();

	std::sort(_container.begin(), _container.end());
	
	int shortest = _container[1] - _container[0];

	for (size_t i = 1 ; i < size ; i++)
		shortest = std::min(shortest, _container[i] - _container[i - 1]);

	return (shortest);
}

int	Span::longestSpan() 
{
	size_t size = _container.size();

	if (size == 0 || size == 1)
		throw SpanNotFoundException();
	int max = *std::max_element(_container.begin(), _container.end());
	int min = *std::min_element(_container.begin(), _container.end());
	
	return (max - min);
}

void	Span::fill(int nbr) 
{
	_container.resize(nbr);

	for (std::vector<int>::iterator it = _container.begin() ; it != _container.end() ; it++)
		*it = rand();
}