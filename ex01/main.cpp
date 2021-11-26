#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap st("Slime");

	// 데미지 안입히는 공격 -> 피해입음 -> 전체 회복
	st.attack("strong rabbit");
	st.takeDamage(8);
	st.beRepaired(30);
	st.guardGate();

	// 에너지 다 닳을때까지 공격
//	for (int i=0; i<11; i++)
//	{
//		ScavTrap.attack("strong rabbit");
//	}
	return (0);
}	