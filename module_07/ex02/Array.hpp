#pragma once
#include <iostream>

template<typename T>
class Array
{
	private:
		T* _vals;
		unsigned int _size;
	public:
		Array( void )
		{
			_vals = NULL;
			_size = 0;
		}

		Array(unsigned int n)
		{
			_vals = new T[n];
			_size = n;
		}

		Array(const Array<T>& arr)
		{
			_vals = new T[arr.size()];
			*this = arr;
		}

		Array& operator = (const Array<T>& arr)
		{
			if (this != &arr)
			{
				delete _vals;
				_vals = new T[arr.size()];
				for (unsigned int i = 0; i < arr.size(); i++)
					_vals[i] = arr[i];
				_size = arr.size();
			}
			return (*this);
		}

		~Array( void ) { delete [] _vals; };

		T& operator[](std::size_t i) const
		{ 
			if (i >= _size)
				throw OutOfBound();
			return _vals[i];
		};

		unsigned int	size( void ) const { return _size; };

		class OutOfBound: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("This index is out of bounds");
				}
		};
};
