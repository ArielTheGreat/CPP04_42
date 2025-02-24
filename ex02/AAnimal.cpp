#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Undefined")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->type=obj.type;
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType() const 
{ 
    return (this->type);
}