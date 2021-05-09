/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:01:01 by migferna          #+#    #+#             */
/*   Updated: 2021/05/09 11:05:16 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &orig): _value(orig._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value):_value(value << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value):_value((int)roundf(value * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &orig)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = orig._value;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const value)
{
	this->_value = value;
}

int Fixed::toInt(void) const
{
	return ((int)this->_value >> this->_fractional_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractional_bits));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
