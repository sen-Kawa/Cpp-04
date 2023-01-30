#include "Animal.class.hpp"

void Animal::makeSound(void) const
{
	std::cout
	<< "Deep jungle silence" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal &	Animal::operator=(const Animal &assign)
{
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

Animal::Animal(Animal const &src)
{
	*this = src;
	return ;
}

Animal::Animal(void)
{
	return ;
}

Animal::~Animal(void)
{
	return ;
}

