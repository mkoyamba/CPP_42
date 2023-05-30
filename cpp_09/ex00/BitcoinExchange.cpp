/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:10:01 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 09:38:15 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filename) {
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string::size_type del = line.find(',');
		if (del == std::string::npos) {
			std::cerr << "Error: Invalid format in database => " << line << '\n';
			continue;
		}
		std::string date = line.substr(0, del);
		std::string rate_str = line.substr(del + 1);
		double rate;
		std::istringstream rate_stream(rate_str);
		if (!(rate_stream >> rate)) {
			std::cerr << "Error: Invalid rate format in database => " << rate_str << '\n';
			continue;
		}
		_data[date] = rate;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& from) {
	*this = from;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& from) {
		this->_data = from._data;
	return (*this);
}

void 	BitcoinExchange::readData(const std::string &filename) {
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		double value;
		char del;
		if (!(ss >> date >> del >> value)) {
			std::cerr << "Error: Unable to parse line => " << line << '\n';
			continue;
		}
		if (del != '|') {
			std::cerr << "Error: Expected '|' delimiter in line => " << line << '\n';
			continue;
		}
		if (!isValidDate(date))
			continue;
		if (!isValidValue(value))
			continue;
		double exchangeRate = getExchangeRate(date);
		if (exchangeRate == -1.0) {
			std::cerr << "Error: No exchange rate available for date => " << date << '\n';
			continue;
		}
		std::cout << date << " => " << value << " = " << value * exchangeRate << std::endl;
	}
}

double	BitcoinExchange::getExchangeRate(const std::string &date) {
	std::map<std::string, double>::iterator it = _data.lower_bound(date);
	if (it != _data.end())
		return it->second;
	else if (!_data.empty())
		return (--it)->second;
	return -1.0;
}

bool	BitcoinExchange::isValidDate(const std::string& date) {
	std::string::size_type firstdel = date.find('-');
	std::string::size_type seconddel = date.rfind('-');
	if (firstdel == std::string::npos || firstdel == seconddel)
		return false;
	std::string year_str = date.substr(0, firstdel);
	std::string month_str = date.substr(firstdel + 1, seconddel - firstdel - 1);
	std::string day_str = date.substr(seconddel + 1);
	int year, month, day;
	std::istringstream year_ss(year_str), month_ss(month_str), day_ss(day_str);
	if (!(year_ss >> year) || !(month_ss >> month) || !(day_ss >> day)) {
		std::cerr << "Error: Invalid year : " << "\"" << date << "\"" << "\n";
		return false;
	}
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
		std::cerr << "Error: Invalid month : " << "\"" << date << "\"" << "\n";
		return false;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) {
		std::cerr << "Error: Invalid day : " << "\"" << date << "\"" << "\n";
		return false;
	}
	if (month == 2) {
		bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
			std::cerr << "Error: Invalid day : " << "\"" << date << "\"" << "\n";
			return false;
		}
	}
	return true;
}

bool	BitcoinExchange::isValidValue(const double &value) {
	if (value < 0 || value > 1000) {
		std::cerr << "Error: Value " << value << " is not a positive number between 0 and 1000.\n";
		return false;
	}
	return true;
}