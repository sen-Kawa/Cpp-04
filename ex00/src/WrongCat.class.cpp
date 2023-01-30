#include "../header/WrongCat.class.hpp"
#include "../header/WrongAnimal.class.hpp"

void WrongCat::makeSound(void) const
{
	std::cout
	<< "WRONG MEOOWWW" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat &assign)
{
	std::cout
	<< "WrongCat assign overload" << std::endl;
	this->type = assign.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
	std::cout
	<< "WrongCat copy constructor" << std::endl;
	this->type = src.type;
	return ;
}

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout
	<< "WrongCat default constructor" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout
	<< "WrongCat destructor" << std::endl;
	return ;
}

