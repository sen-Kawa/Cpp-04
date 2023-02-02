#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
	private:


	public:

		virtual void	makeSound(void) const;
		
		Dog&			operator=(Dog const &assign);

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
};

#endif

