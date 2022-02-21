#ifndef ARRAY_HPP
#define ARRAY_HPP

template< typename T >
class Array
{
	public:
		Array<T>(void)
		{
			this->_array = new T[0]();
			_size = 0;
		}
		Array(Array<T> const & rhs)
		{
			this->_array = new T[rhs.size()];
			this->_size = rhs.size();
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}
		Array (unsigned int n)
		{
			_array = new T[n]();
			_size = n;
		}
		~Array<T>(void)
		{
			delete [] _array;
		}
		unsigned int size() const
		{
			return (_size);
		}
		T&	operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::out_of_range("Out of range !");
			return (this->_array[i]);
		}
		Array<T>&	operator=(Array<T> const & rhs)
		{
			if (this != &rhs)
			{
				delete [] this->_array;
				this->_array = rhs._array;
				this->_size = rhs._size;
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		
	private:
		unsigned int	_size;
		T				*_array;
};

#endif