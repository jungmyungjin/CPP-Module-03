/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:59:14 by mjung             #+#    #+#             */
/*   Updated: 2021/12/10 20:16:33 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
public :
//  생성자
	ClapTrap();
	ClapTrap(std::string const _name);

// 소멸자
	~ClapTrap();

// 복사 생성자
	ClapTrap(const ClapTrap &target);

// 할당 연산자 오버로딩
	ClapTrap &operator= (const ClapTrap &target);

// 함수
	void attack(std::string const &_target);
	void takeDamage(unsigned int _amount);
	void beRepaired(unsigned int _amount);

private:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
	

	void printName(void);
};

#endif //EX00_CLAPTRAP_H
