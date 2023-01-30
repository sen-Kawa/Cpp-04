#include "../header/Animal.class.hpp"
#include "../header/WrongAnimal.class.hpp"
#include "../header/Cat.class.hpp"
#include "../header/WrongCat.class.hpp"
#include "../header/Dog.class.hpp"

int main(void)
{
	std::cout << "CLASS TESTS" << std::endl;
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

	std::cout << "\nSUBJECT TESTS" << std::endl;
	std::cout << "-----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "\nWRONG CLASS TESTS" << std::endl;
	std::cout << "-----------" << std::endl;
	const WrongAnimal* wrongy = new WrongAnimal();
	const WrongAnimal* catty = new WrongCat();
	const WrongCat* catto = new WrongCat();

	std::cout << catty->getType() << " " << std::endl;
	std::cout << catto->getType() << " " << std::endl;
	catty->makeSound();
	catto->makeSound();
	wrongy->makeSound();
	delete catty;
	delete catto;
	delete wrongy;

	return(0);
}
