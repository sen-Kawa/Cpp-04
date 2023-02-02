#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>

class Brain
{
	private:

		std::string	ideas[100];

	public:

		const std::string	*getBrain(void) const;

		Brain(void);
		Brain(Brain const &src);
		Brain&	operator=(Brain const &assign);
		~Brain(void);
};

#endif
