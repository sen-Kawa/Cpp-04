#include "../header/Animal.class.hpp"

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
	std::cout
	<< "Animal assign overload" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

Animal::Animal(Animal const &src)
{
	std::cout
	<< "Animal copy constructor" << std::endl;
	*this = src;
	return ;
}

Animal::Animal(void)
{
	std::cout
	<< "Animal constructor" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout
	<< "Animal destructor" << std::endl;
	return ;
}

