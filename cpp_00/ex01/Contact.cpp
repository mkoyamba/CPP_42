/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:11:52 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 12:28:48 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string	Contact::getFirst(void) {
	return	this->_first_name;
}

std::string	Contact::getLast(void) {
	return	this->_last_name;
}

std::string	Contact::getNick(void) {
	return	this->_nickname;
}

std::string	Contact::getPhone(void) {
	return	this->_phone_number;
}

std::string	Contact::getSecret(void) {
	return	this->_darkest_secret;
}

void	Contact::setFirst(std::string buffer) {
	this->_first_name = buffer;
}

void	Contact::setLast(std::string buffer) {
	this->_last_name = buffer;
}

void	Contact::setNick(std::string buffer) {
	this->_nickname = buffer;
}

void	Contact::setPhone(std::string buffer) {
	this->_phone_number = buffer;
}

void	Contact::setSecret(std::string buffer) {
	this->_darkest_secret = buffer;
}