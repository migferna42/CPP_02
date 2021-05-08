/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:55:25 by migferna          #+#    #+#             */
/*   Updated: 2021/05/08 20:01:01 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	int 				_value;
	static const int	_fractional_bits = 8;
public:
			Fixed(void);
			~Fixed(void);
			Fixed(Fixed const &orig);
	Fixed 	&operator=(Fixed const &orig);
	int		getRawBits(void) const;
	void 	setRawBits(int const raw);
};

#endif
