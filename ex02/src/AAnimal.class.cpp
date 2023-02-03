#include "../header/AAnimal.class.hpp"

std::string AAnimal::getType(void) const
{
	return (this->type);
}

AAnimal &	AAnimal::operator=(const AAnimal &assign)
{
	std::cout
	<< "AAnimal assign overload" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout
	<< "AAnimal copy constructor" << std::endl;
	*this = src;
	return ;
}

AAnimal::AAnimal(void)
{
	std::cout
	<< "AAnimal constructor" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout
	<< "AAnimal destructor" << std::endl;
	return ;
}

