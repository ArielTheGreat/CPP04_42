#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
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

void	Animal::makeSound()
{
	std::cout << "* indistinguishable noises *" << std::endl;
}

std::string Animal::getType()
{
    return (this->type);
}