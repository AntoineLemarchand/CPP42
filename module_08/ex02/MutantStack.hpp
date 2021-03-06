#pragma once
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack( void ): std::stack<T>()
		{};

		MutantStack(const MutantStack& m): std::stack<T>(m)
		{
			*this = m;
		}

		MutantStack& operator = (const MutantStack& m)
		{
			if (this != &m)
				this->c = m.c;
			return (*this);
		}

		~MutantStack( void ) {};


		iterator begin( void )
		{
			return (this->c.begin());
		};

		iterator end( void )
		{
			return (this->c.end());
		};
};
