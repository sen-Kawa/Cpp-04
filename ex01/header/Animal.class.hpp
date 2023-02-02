#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>

class Animal
{
	private:

	protected:

		std::string		type;

	public:

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		
		Animal &		operator=(Animal const &assign);

		Animal(void);
		Animal(Animal const &src);
		virtual	~Animal(void);
};

#endif

