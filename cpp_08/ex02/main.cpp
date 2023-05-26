/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:00:03 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/26 11:05:43 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "======= STACK =======" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator sit = mstack.begin();
	MutantStack<int>::iterator site = mstack.end();
	while (sit != site) {
		std::cout << *sit << std::endl;
		++sit;
	}
	std::stack<int> s(mstack);

	std::cout << "======= LIST =======" << std::endl;
	std::list<int> tlist;
	tlist.push_back(5);
	tlist.push_back(17);
	std::cout << tlist.back() << std::endl;
	tlist.pop_back();
	std::cout << tlist.size() << std::endl;
	tlist.push_back(3);
	tlist.push_back(5);
	tlist.push_back(737);
	tlist.push_back(0);
	std::list<int>::iterator lit = tlist.begin();
	std::list<int>::iterator lite = tlist.end();
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> tlist2(tlist);
	return 0;
}