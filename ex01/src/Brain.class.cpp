#include "../header/Brain.class.hpp"

const std::string* Brain::getBrain(void) const
{
	return (this->ideas);
}

Brain::Brain(void)
{
	std::cout
	<< "Brain default const" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout
	<< "Brain copy const" << std::endl;
	*this = src;
	return ;
}

Brain &	Brain::operator=(const Brain &assign)
{
	std::cout
	<< "Brain assign" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout
	<< "Brain destructor" << std::endl;
	return ;
}
