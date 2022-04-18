#pragma once

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& fixed );
		Fixed( const int val );
		Fixed( const float val );

		~Fixed();

		Fixed	&operator = ( const Fixed& fixed );
		friend std::ostream	&operator << ( std::ostream& out, const Fixed& fixed);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_value;
		static const int	_scaling_factor = 8;
};
