#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 10;
	energyPoint_ = 10;
	attackDamage_ = 0;
	std::cout << "[ ClapTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "[ ClapTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}

// Function
void ClapTrap::attack(std::string const &_target)
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
	printName();
	std::cout <<" attacks " << _target << ", ";
	std::cout <<"causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoint_--;
}

void ClapTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void ClapTrap::beRepaired(unsigned int _amount)
{
	if (hitPoint_ + _amount >= 10)
		hitPoint_ = 10;
	else
		hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"points! [MAX:10]";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void ClapTrap::printName()
{
	std::cout << "<" << "ClapTrap" << " \"";
	std::cout << name_ << "\" > ";
}

// 대입 연산자 오버로딩 (깊은 복사 / 사실 이걸 굳이 하지 안하도 디폴트 대입 연산인 된다)
ClapTrap &ClapTrap::operator=(const ClapTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}

