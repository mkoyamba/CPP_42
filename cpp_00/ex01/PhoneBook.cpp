/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:02:59 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 12:57:16 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	for (int n = 0; n < 8; n++)
	{
		this->_repertory[n].setFirst("");
		this->_repertory[n].setLast("");
		this->_repertory[n].setNick("");
		this->_repertory[n].setPhone("");
		this->_repertory[n].setSecret("");
	}
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::newContact(Contact &contact) {
	for (int n = 7; n > 0; n--)
		this->_repertory[n] = this->_repertory[n - 1];
	this->_repertory[0].setFirst(contact.getFirst());
	this->_repertory[0].setLast(contact.getLast());
	this->_repertory[0].setNick(contact.getNick());
	this->_repertory[0].setPhone(contact.getPhone());
	this->_repertory[0].setSecret(contact.getSecret());
}

int	PhoneBook::isContact(int n) {
	if (this->_repertory[n].getFirst().compare(""))
		return 1;
	else
		return 0;
}

Contact	&PhoneBook::contact(int n) {
	return	this->_repertory[n];
}