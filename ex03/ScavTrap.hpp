/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:07:52 by mjung             #+#    #+#             */
/*   Updated: 2021/12/12 15:12:52 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();
	ScavTrap(const ScavTrap &target);
	ScavTrap &operator= (const ScavTrap &target);
	void guardGate();
	void printName() ;

	void attack(std::string const &_target) ;
	void takeDamage(unsigned int _amount) ;
	void beRepaired(unsigned int _amount) ;

	int getHp(void) const;
	unsigned int getEp(void) const;
	unsigned int getAd(void) const;

protected:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif