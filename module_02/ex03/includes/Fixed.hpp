#pragma once
#include "iostream"

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

		bool	operator > ( const Fixed& fixed ) const;
		bool	operator < ( const Fixed& fixed ) const;
		bool	operator >= ( const Fixed& fixed ) const;
		bool	operator <= ( const Fixed& fixed ) const;
		bool	operator == ( const Fixed& fixed ) const;
		bool	operator != ( const Fixed& fixed ) const;

		Fixed	operator + ( const Fixed& fixed ) const;
		Fixed	operator - ( const Fixed& fixed ) const;
		Fixed	operator * ( const Fixed& fixed ) const;
		Fixed	operator / ( const Fixed& fixed ) const;

		Fixed	&operator ++ ( void );
		Fixed	&operator -- ( void );
		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed	min(const Fixed& a, const Fixed& b);
		static const Fixed	max(const Fixed& a, const Fixed& b);
	private:
		int					_value;
		static const int	_scaling_factor = 8;
};
