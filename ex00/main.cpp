#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    WrongAnimal*	base_w = new WrongAnimal();
	WrongAnimal*	tiger_w = new WrongCat();
	WrongCat*		tiger_origin = new WrongCat();

	base_w->makeSound();
	tiger_w->makeSound();
	tiger_origin->makeSound();

	delete base_w;
	delete tiger_w;
	delete tiger_origin;
    return 0;
}