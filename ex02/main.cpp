/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:52:16 by mjung             #+#    #+#             */
/*   Updated: 2021/12/10 20:58:42 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// [ ScavTrap 기본 스텟 ]
// hitPoint_ = 100;
// energyPoint_ = 100;
// attackDamage_ = 30;

int main(void)
{
	FragTrap st("Slime");
	
	// 데미지 안입히는 공격 -> 피해입음 -> 전체 회복
	st.attack("strong rabbit");
	st.takeDamage(80);
	st.beRepaired(30);

	// 이번에 추가된 함수 : 하이파이브를 한다.
	st.highFivesGuys();
	return (0);
}
