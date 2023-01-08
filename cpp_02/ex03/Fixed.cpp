/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:52 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 12:12:24 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->_value = 0;
}

Fixed::Fixed(const int n) {
	this->_value = n << this->_bits;
}

Fixed::Fixed(const float n) {
	this->_value = (int)roundf(n * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &toCopy) {
	*this = toCopy;
}

Fixed::~Fixed(void) {}

Fixed	&Fixed::operator=(const Fixed &toAffect) {
	this->setRawBits(toAffect.getRawBits());
	return *this;
}

Fixed	Fixed::operator+(const Fixed &toAffect) {
	return Fixed(this->toFloat() + toAffect.toFloat());
}

Fixed	Fixed::operator-(const Fixed &toAffect) {
	return Fixed(this->toFloat() - toAffect.toFloat());
}

Fixed	Fixed::operator*(const Fixed &toAffect) {
	return Fixed(this->toFloat() * toAffect.toFloat());
}

Fixed	Fixed::operator/(const Fixed &toAffect) {
	return Fixed(this->toFloat() / toAffect.toFloat());
}

bool	Fixed::operator>(const Fixed &toAffect) const {
	return (this->getRawBits() > toAffect.getRawBits());
}

bool	Fixed::operator<(const Fixed &toAffect) const {
	return (this->getRawBits() < toAffect.getRawBits());
}

bool	Fixed::operator>=(const Fixed &toAffect) const {
	return (this->getRawBits() >= toAffect.getRawBits());
}

bool	Fixed::operator<=(const Fixed &toAffect) const {
	return (this->getRawBits() <= toAffect.getRawBits());
}

bool	Fixed::operator==(const Fixed &toAffect) const {
	return (this->getRawBits() == toAffect.getRawBits());
}

bool	Fixed::operator!=(const Fixed &toAffect) const {
	return (this->getRawBits() != toAffect.getRawBits());
}

Fixed&	Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed&	Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

int	Fixed::getRawBits(void) const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	return float(this->_value) / (1 << _bits);
}

int	Fixed::toInt(void) const {
	return this->_value >> _bits;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
