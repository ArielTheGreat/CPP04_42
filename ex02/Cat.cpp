#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : AAnimal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type=obj.type;
    this->brain = new Brain(*obj.brain);
}

Cat &Cat::operator=(const Cat &obj)
{
    if (this != &obj) {
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
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