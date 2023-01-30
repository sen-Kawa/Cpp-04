#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include "Animal.class.hpp"

class Dog : public Animal
{
	private:


	public:

		void		makeSound(void) const;
		std::string	getDog(void) const;
		
		Dog&		operator=(Dog const &assign);

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

};

#endif

