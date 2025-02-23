#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Ferrari")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type=obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this != &obj)
		this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(Car sound) PI PI PIIIIII" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}