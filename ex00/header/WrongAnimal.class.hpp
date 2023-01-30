#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <iostream>

class WrongAnimal
{
	private:

	protected:

		std::string		type;

	public:

		void			makeSound(void) const;
		std::string		getType(void) const;
		
		WrongAnimal&	operator=(WrongAnimal const &assign);

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual	~WrongAnimal(void);
};

#endif

