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
	if (this != &assign)
	{
		*brain = *(assign.brain);
		this->type = assign.type;
	}
	return (*this);
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout
	<< "Cat copy constructor" << std::endl;
	this->type = src.type;
	this->brain = new Brain();
	*brain = *src.brain;
	return ;
}

Cat::Cat(void) : Animal()
{
	std::cout
	<< "Cat default constructor" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
	return ;
}

Cat::~Cat(void)
{
	std::cout
	<< "Cat destructor" << std::endl;
	delete brain;
	return ;
}

