#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap is created. ]" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap \"" << name_ << "\" is created. ]" << std::endl;
}

FragTrap::~FragTrap()
{
	if (name_ != "")
	{
		std::cout << "[ FragTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ FragTrap is destroyed. ]" << std::endl;
	}}

// 복사 생성자
FragTrap::FragTrap(const FragTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}


// 할당 연산자 오버로딩 (깊은 복사 / 사실 이걸 굳이 하지 안하도 디폴트 대입 연산인 된다)
FragTrap &FragTrap::operator=(const FragTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
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