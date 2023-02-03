#include "../header/Dog.class.hpp"
#include "../header/AAnimal.class.hpp"

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
	if (this != &assign)
	{
		*brain = *(assign.brain);
		this->type = assign.type;
	}
	return (*this);
}

Dog::Dog(Dog const &src) : AAnimal()
{
	std::cout
	<< "Dog copy constructor" << std::endl;
	this->type = src.type;
	this->brain = new Brain();
	*brain = *src.brain;
	return ;
}

Dog::Dog(void) : AAnimal()
{
	std::cout
	<< "Dog default constructor" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
	return ;
}

Dog::~Dog(void)
{
	std::cout
	<< "Dog destructor" << std::endl;
	delete brain;
	return ;
}

