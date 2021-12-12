/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:12:06 by mjung             #+#    #+#             */
/*   Updated: 2021/12/12 15:12:11 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap is created. ]" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap \"" << name_ << "\" is created. ]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "[ ScavTrap has entered the gate keeper board ]" << std::endl;

}

void ScavTrap::attack(std::string const &_target)
{
	if (hitPoint_ <= 0)
	{
		printName();
		std::cout << " can't move... " << std::endl;
		return ;
	}
	if (energyPoint_ == 0)
	{
		printName();
		std::cout << " has no energy... " << std::endl;
		return ;
	}

	energyPoint_-= 10;
	printName();
	std::cout <<" attacks " << _target << ", ";
	std::cout <<"causing " << attackDamage_ << " points of damage! ";
	std::cout << "(energyPoint_ : " << energyPoint_ << ")" << std::endl;
}
void ScavTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}
void ScavTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void ScavTrap::printName()
{
	std::cout << "<" << "ScavTrap" << " \"";
	std::cout << name_ << "\" > ";
}