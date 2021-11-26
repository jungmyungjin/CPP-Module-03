#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();
	void guardGate();
	void printStat();
	void printName();

	void attack(std::string const &_target);
	void takeDamage(unsigned int _amount);
	void beRepaired(unsigned int _amount);


private:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif