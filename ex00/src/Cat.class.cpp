#include "../header/Cat.class.hpp"
#include "../header/Animal.class.hpp"

void Cat::makeSound(void) const
{
	std::cout
	<< "MEOOWWW" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat &assign)
{
	std::cout
	<< "Cat assign overload" << std::endl;
	this->type = assign.type;
	return (*this);
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout
	<< "Cat copy constructor" << std::endl;
	this->type = src.type;
	return ;
}

Cat::Cat(void) : Animal()
{
	std::cout
	<< "Cat default constructor" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::~Cat(void)
{
	std::cout
	<< "Cat destructor" << std::endl;
	return ;
}

