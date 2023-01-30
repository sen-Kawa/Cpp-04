#include "Dog.class.hpp"
#include "Animal.class.hpp"

void Dog::makeSound(void) const
{
	std::cout
	<< "WOOOFFF" << std::endl;
	return ;
}

Dog &	Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

Dog::Dog(Dog const &src)
{
	*this = src;
	return ;
}

Dog::Dog(void)
{
	return ;
}

Dog::~Dog(void)
{
	return ;
}

