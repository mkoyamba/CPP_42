/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:22:15 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 09:37:56 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN& from) { *this = from; }

RPN& RPN::operator=(const RPN& from) {
	(void)from;
	return *this;
}

bool RPN::isValid(const std::string arg) {
	if (arg.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

void RPN::calculate(const std::string arg) {
	if (!isValid(arg)) {
		std::cout << "Error: Invalid character" << std::endl;
		return ;
	}
	for (size_t i = 0; i < arg.size(); i++) {
		char c = arg[i];
		if (c == ' ')
			continue;
		else if (isdigit(c)) {
			int number = c - '0';
			_numbers.push(number);
		}
		else if (c == '+' && _numbers.size() >= 2) {
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a + b);
		}
		else if (c == '-' && _numbers.size() >= 2) {
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a - b);
		}
		else if (c == '*' && _numbers.size() >= 2) {
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a * b);
		}
		else if (c == '/' && _numbers.size() >= 2) {
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a / b);
		}
	}
	if (_numbers.size() == 1) {
		double result = _numbers.top();
		_numbers.pop();
		std::cout << result << std::endl;
	}
	else
		std::cout << "Error: Insufficient operands" << std::endl;
}