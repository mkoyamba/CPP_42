/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:52:58 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/25 14:10:25 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::complain(std::string level) {
	int	i;

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
			break ;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	for (int n = i; n < 4; n++)
	{
		
		switch(n)
		{
			case 0:
				std::cout << "[ " << levels[n] << " ]" << std::endl;
				(this->*func[n])();
				std::cout << std::endl;
				break ;
			case 1:
				std::cout << "[ " << levels[n] << " ]" << std::endl;
				(this->*func[n])();
				std::cout << std::endl;
				break ;
			case 2:
				std::cout << "[ " << levels[n] << " ]" << std::endl;
				(this->*func[n])();
				std::cout << std::endl;
				break ;
			case 3:
				std::cout << "[ " << levels[n] << " ]" << std::endl;
				(this->*func[n])();
				std::cout << std::endl;
				break ;
		}
	}
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}