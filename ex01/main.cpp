#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal*	dog1 = new Dog();
	Animal* dog2 = new Dog();
	Animal* cat1 = new Cat();
	Animal* cat2 = new Cat();
	Animal* animalArr[] = {dog1, dog2, cat1, cat2};

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