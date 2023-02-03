#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Dog : public AAnimal
{
	private:

		Brain	*brain;

	public:

		virtual void	makeSound(void) const;
		
		Dog&			operator=(Dog const &assign);

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
};

#endif

