#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

#include <iostream>

class AAnimal
{
	private:

	protected:

		std::string		type;

	public:

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		
		AAnimal &		operator=(AAnimal const &assign);

		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual	~AAnimal(void);
};

#endif

