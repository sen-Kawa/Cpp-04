#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>

class Animal
{
	private:

	protected:

		std::string	type;

	public:

		std::string	getType(void) const;
		
		Animal &	operator=(Animal const &assign);

		Animal(void);
		Animal(Animal const &src);
		~Animal(void);

};

#endif

