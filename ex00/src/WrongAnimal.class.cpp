#include "../header/WrongAnimal.class.hpp"

void WrongAnimal::makeSound(void) const
{
	std::cout
	<< "Deep jungle silence" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal &	WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout
	<< "WrongAnimal assign overload" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout
	<< "WrongAnimal copy constructor" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout
	<< "WrongAnimal constructor" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout
	<< "WrongAnimal destructor" << std::endl;
	return ;
}

