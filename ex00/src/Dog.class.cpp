#include "../header/Dog.class.hpp"
#include "../header/Animal.class.hpp"

void Dog::makeSound(void) const
{
	std::cout
	<< "WOOOFFF" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog &assign)
{
	std::cout
	<< "Dog assign overload" << std::endl;
	this->type = assign.type;
	return (*this);
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout
	<< "Dog copy constructor" << std::endl;
	this->type = src.type;
	return ;
}

Dog::Dog(void) : Animal()
{
	std::cout
	<< "Dog default constructor" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::~Dog(void)
{
	std::cout
	<< "Dog destructor" << std::endl;
	return ;
}

