/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:18:12 by mjung             #+#    #+#             */
/*   Updated: 2021/12/10 20:59:11 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// [ ScavTrap 기본 스텟 ]
// hitPoint_ = 100;
// energyPoint_ = 50;
// attackDamage_ = 20;

int main(void)
{
	ScavTrap st("Slime");

	// 데미지 안입히는 공격 -> 피해입음 -> 전체 회복
	st.attack("strong rabbit");
	st.takeDamage(80);
	st.beRepaired(30);

	// 이번에 추가된 함수 : 게이트 관련 문구를 출력한다.
	st.guardGate();

	// 에너지 다 닳을때까지 공격
//	for (int i=0; i<11; i++)
//	{
//		ScavTrap.attack("strong rabbit");
//	}
	return (0);
}	