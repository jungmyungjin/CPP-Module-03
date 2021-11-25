
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
public :
// Constructor
	ClapTrap(std::string _name);

// Destructor
	~ClapTrap();

	ClapTrap &operator= (const ClapTrap &target);

// Function
	void attack(std::string const &_target);
	void takeDamage(unsigned int _amount);
	void beRepaired(unsigned int _amount);

private:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;

	void printName(void);
};

#endif //EX00_CLAPTRAP_H
