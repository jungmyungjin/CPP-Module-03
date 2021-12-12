/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:12:37 by mjung             #+#    #+#             */
/*   Updated: 2021/12/12 15:12:38 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string _name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &target);
	DiamondTrap &operator= (const DiamondTrap &target);

	int getHp(void) const;
	unsigned int getEp(void) const;
	unsigned int getAd(void) const;
	void whoAmI();


protected:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif
