#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type=obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
    if (this != &obj)
		this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "(Cat rolling on the ground) Miau Miau MIAUUUUU!" << std::endl;
}