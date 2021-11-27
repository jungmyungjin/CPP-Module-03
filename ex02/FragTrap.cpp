#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap is created. ]" << std::endl;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap \"" << name_ << "\" is created. ]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[ FragTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << "[ FragTrap gives a high five ]" << std::endl;

}

void FragTrap::attack(std::string const &_target)
{
	if (hitPoint_ <= 0)
	{
		printName();
		std::cout << " can't move... " << std::endl;
		return ;
	}
	if (energyPoint_ == 0)
	{
		printName();
		std::cout << " has no energy... " << std::endl;
		return ;
	}

	energyPoint_-= 10;
	printName();
	std::cout <<" attacks " << _target << ", ";
	std::cout <<"causing " << attackDamage_ << " points of damage! ";
	std::cout << "(energyPoint_ : " << energyPoint_ << ")" << std::endl;
}
void FragTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}
void FragTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void FragTrap::printName()
{
	std::cout << "<" << "FragTrap" << " \"";
	std::cout << name_ << "\" > ";
}