#include "ClapTrap.hpp"

//  생성자
ClapTrap::ClapTrap(void)
{
	hitPoint_ = 10;
	energyPoint_ = 10;
	attackDamage_ = 0;
	std::cout << "[ ClapTrap is created. ]" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 10;
	energyPoint_ = 10;
	attackDamage_ = 0;
	std::cout << "[ ClapTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// 소멸자
ClapTrap::~ClapTrap()
{
	if (name_ != "")
	{
		std::cout << "[ ClapTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ ClapTrap is destroyed. ]" << std::endl;
	}
}

// 복사 생성자
ClapTrap::ClapTrap(const ClapTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}


// 할당 연산자 오버로딩 (깊은 복사 / 사실 이걸 굳이 하지 안하도 디폴트 대입 연산인 된다)
ClapTrap &ClapTrap::operator=(const ClapTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}


// 함수
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

	energyPoint_-= 10;
	printName();
	std::cout <<" attacks " << _target << ", ";
	std::cout <<"causing " << attackDamage_ << " points of damage! ";
	std::cout << "(energyPoint_ : " << energyPoint_ << ")" << std::endl;
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
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void ClapTrap::printName()
{
	std::cout << "<" << "ClapTrap" << " \"";
	std::cout << name_ << "\" > ";
}