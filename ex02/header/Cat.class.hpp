#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal
{
	private:

		Brain	*brain;

	public:

		virtual void	makeSound(void) const;
		
		Cat&			operator=(Cat const &assign);

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
};

#endif

