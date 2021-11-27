
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
# define C_HP 10
# define C_EP 10
# define C_AD 0

class ClapTrap
{
public :
//  생성자
	ClapTrap();
	ClapTrap(std::string const _name);

// 소멸자
	virtual ~ClapTrap();

// 복사 생성자
	ClapTrap(const ClapTrap &target);

// 할당 연산자 오버로딩
	ClapTrap &operator= (const ClapTrap &target);

// 함수
	 void attack(std::string const &_target);
	 void takeDamage(unsigned int _amount);
	 void beRepaired(unsigned int _amount);
	 void printName(void);

protected:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif //EX00_CLAPTRAP_H
