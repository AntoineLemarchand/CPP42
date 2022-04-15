#pragma once

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& fixed );
		Fixed &operator = ( const Fixed& fixed );
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int					_value;
		static const int	_scaling_factor = 8;
};
