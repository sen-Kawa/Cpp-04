#include "../header/Animal.class.hpp"
#include "../header/Cat.class.hpp"
#include "../header/Dog.class.hpp"
#include "../header/Brain.class.hpp"

int main(void)
{
/*	std::cout << "CLASS TESTS" << std::endl;
	std::cout << "-----------" << std::endl;
	const Animal* animal = new Animal();
	const Dog* dogo = new Dog();
	const Cat* cato = new Cat();

	std::cout << dogo->getType() << " " << std::endl;
	std::cout << cato->getType() << " " << std::endl;
	dogo->makeSound();
	cato->makeSound();
	animal->makeSound();
	delete dogo;
	delete cato;
	delete animal;
*/
	std::cout << "\nSUBJECT TESTS" << std::endl;
	std::cout << "-----------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;

	return(0);
}
