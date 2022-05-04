#pragma once
#include <string>

class Caster
{
	private:
		const std::string	_val;

	public:
		Caster( void );
		Caster( std::string literal );
		Caster(const Caster& caster);
		Caster& operator = (const Caster& caster);
		~Caster( void );

		std::string	getVal( void ) const;

		void		putChar( void ) const;
		void		putInt( void ) const;
		void		putFloat( void ) const;
		void		putDouble( void ) const;
};

std::ostream&	operator << ( std::ostream& out, const Caster& c );
