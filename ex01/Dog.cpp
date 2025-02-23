#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type=obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
    if (this != &obj)
		this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "(Barking aggresively!) WOOOOF WOOF WOOOF!" << std::endl;
}