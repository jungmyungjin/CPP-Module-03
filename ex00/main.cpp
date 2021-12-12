/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:09:28 by mjung             #+#    #+#             */
/*   Updated: 2021/12/10 20:18:42 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// [ ClapTrap 기본 스텟 ]
// HitPoint_ = 10;
// EnergyPoint_ = 10;
// AttackDamage_ = 0; --> (공격력이 없다)

int main(void)
{

	ClapTrap claptrap("Slime");

	// 데미지 안입히는 공격 -> 피해입음 -> 전체 회복
	claptrap.attack("strong rabbit");
	claptrap.takeDamage(8);
	claptrap.takeDamage(3);
	claptrap.beRepaired(30);

	// 에너지 다 닳을때까지 공격
	claptrap.attack("strong rabbit");
	return (0);
}	