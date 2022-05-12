#include "Span.hpp"

Span::Span( void )
{
	_size = 2;
}

Span::Span( unsigned int N )
{
	_size = N;
}

Span::Span( const Span& s )
{
	*this = s;
}

Span& Span::operator = ( const Span& s )
{
	if (this != &s)
		_nums = s.getNums();
	return (*this);
}

Span::~Span( void )
{}

std::vector<int>	Span::getNums( void ) const
{
	return (_nums);
}

unsigned int		Span::getSize( void ) const
{
	return (_size);
}

void	Span::addNumber( int toAdd )
{
	if (_size == _nums.size())
		throw std::exception();
	_nums.push_back(toAdd);
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
	std::vector<int>	toAdd = std::vector<int>(begin, end);
	if (toAdd.size() + _nums.size() > _size)
		throw std::exception();
	_nums.insert(_nums.end(), begin, end);
}

unsigned int	Span::shortestSpan( void ) const
{
	if (_size <= 1 || _nums.size() <= 1)
		throw std::exception();
	long ret = std::abs(static_cast<long>(_nums[0]) - static_cast<long>(_nums[1]));
	for (unsigned int i = 0; i < _nums.size() - 1; i++)
	{
		long eval = std::abs(static_cast<long>(_nums[i + 1]) - static_cast<long>(_nums[i]));
		if (ret > eval)
			ret = eval;
	}
	return (ret);
}

unsigned int	Span::longestSpan( void ) const
{
	if (_size <= 1 || _nums.size() <= 1)
		throw std::exception();
	double max = *std::max_element(_nums.begin(), _nums.end());
	double min = *std::min_element(_nums.begin(), _nums.end());
	return (static_cast<unsigned int>(max - min));
}
