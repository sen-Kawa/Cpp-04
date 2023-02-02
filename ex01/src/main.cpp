#include "../header/Animal.class.hpp"
#include "../header/Cat.class.hpp"
#include "../header/Dog.class.hpp"
#include "../header/Brain.class.hpp"

int main(void)
{
	std::cout << "CLASS TEST" << std::endl;
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

	std::cout << "\nSUBJECT TESTS 1" << std::endl;
	std::cout << "-----------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;

	std::cout << "\nSUBJECT TESTS 2" << std::endl;
	std::cout << "-----------" << std::endl;
	int		size = 20;
	Animal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
	{
		std::cout
		<< animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}

	return(0);
}
