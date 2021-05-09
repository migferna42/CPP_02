/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:55:25 by migferna          #+#    #+#             */
/*   Updated: 2021/05/09 10:23:33 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	int 				_value;
	static const int	_fractional_bits = 8;
public:
			Fixed(void);
			Fixed(const int value);
			Fixed(const float value);
			~Fixed(void);
			Fixed(Fixed const &orig);
	Fixed 	&operator=(Fixed const &orig);
	int		getRawBits(void) const;
	void 	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
