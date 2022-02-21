#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <cstdlib>
#include <ctime>

class Span 
{
	private:
		unsigned int		_max_size;
		std::vector<int>	_container;
	public:
		virtual ~Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);

		void addNumber(int x);
		int shortestSpan();
		int longestSpan();

		void fill(int nbr);

		class ContainerExceededException : public std::exception 
        {
			public:
				virtual const char *what() const throw()
				{
					return ("container limit exceeded !");
				}
		};
		class SpanNotFoundException : public std::exception 
        {
			public:
				virtual const char *what() const throw()
				{
					return ("No span to find ! (empty container or only one nbr).");
				}
		};
};

#endif