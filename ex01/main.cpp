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

	Dog test;
	test.makeSound();

	for (int i = 0; i < 4; i++) {
		delete animalArr[i];
	}
	return (0);
}