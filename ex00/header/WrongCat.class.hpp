#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include <iostream>
#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	private:


	public:

		void		makeSound(void) const;
		
		WrongCat&	operator=(WrongCat const &assign);

		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
};

#endif

