/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:12:31 by mjung             #+#    #+#             */
/*   Updated: 2021/12/12 15:12:36 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::name_ = name_ + "_clap_name";
	hitPoint_ = FragTrap::getHp();	// 100
	energyPoint_ = ScavTrap::getEp();	// 50
	attackDamage_ = FragTrap::getAd();	// 30
	std::cout << "[ DiamondTrap is created. ]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name): ClapTrap(), ScavTrap(), FragTrap()
{
	name_ = _name;
	ClapTrap::name_ = name_ + "_clap_name";
	hitPoint_ = FragTrap::getHp();	// 100
	energyPoint_ = ScavTrap::getEp();	// 50
	attackDamage_ = FragTrap::getAd();	// 30
	std::cout << "[ DiamondTrap \"" << name_ << "\" is created. ]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	if (name_ != "")
	{
		std::cout << "[ DiamondTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ DiamondTrap is destroyed. ]" << std::endl;
	}}

// 복사 생성자
DiamondTrap::DiamondTrap(const DiamondTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}


// 할당 연산자 오버로딩 (깊은 복사 / 사실 이걸 굳이 하지 안하도 디폴트 대입 연산인 된다)
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}

int DiamondTrap::getHp() const
{
	return (hitPoint_);
}

unsigned int DiamondTrap::getEp() const
{
	return (energyPoint_);
}

unsigned int DiamondTrap::getAd() const
{
	return (attackDamage_);
}


void DiamondTrap::whoAmI()
{
	std::cout << "[ whoAmI? : My name is \"" << name_ << "\"";
	std::cout << "and my claptrap name is " <<  ClapTrap::name_ << " ]" << std::endl;
}


