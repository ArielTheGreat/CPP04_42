#include "Animal.hpp"

Animal::Animal() : type("Undefined")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type=obj.type;
}

Animal &Animal::operator=(const Animal &obj)
{
    if (this != &obj)
		this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "* indistinguishable noises *" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}