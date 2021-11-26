#include "ClapTrap.hpp"

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