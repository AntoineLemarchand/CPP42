#pragma once
#include <cstdlib>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_nums;
		unsigned int		_size;
	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span& s );
		Span& operator = ( const Span& s );
		~Span( void );

		void	addNumber( int toAdd );
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		std::vector<int>	getNums( void ) const;
		unsigned int		getSize( void ) const;

		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;
};
