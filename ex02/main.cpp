#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal base;
	std::cout << "Type of base class " << base.getType() << std::endl;
	AAnimal* dog1 = new Dog();
	AAnimal* dog2 = new Dog();
	AAnimal* cat1 = new Cat();
	AAnimal* cat2 = new Cat();
	AAnimal* animalArr[] = {dog1, dog2, cat1, cat2};

	for (int i = 0; i < 4; i++)
	{
		std::cout << "The animal type: " << animalArr[i]->getType()
				<< " makes the sound -> ";
		animalArr[i]->makeSound();
	}

	Dog *test = new Dog();
	test->setBrainIdea(1, "Duro");
	Dog dogo(*test);
	delete test;
	dogo.makeSound();
	std::cout << dogo.getBrainIdea(1) << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animalArr[i];
	}
	// system("leaks Interfaces");
	return (0);
}