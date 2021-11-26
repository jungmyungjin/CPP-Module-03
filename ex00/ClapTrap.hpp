
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
	unsigned int maxHitPoint_;
	int hitPoint_;
	unsigned int maxEnergyPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
	

	void printName(void);
};

#endif //EX00_CLAPTRAP_H
