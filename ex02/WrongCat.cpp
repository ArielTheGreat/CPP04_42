#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type=obj.type;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    if (this != &obj)
		this->type = obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "(Lion dressed as cat) ARRRGH AAAARGGGGH!" << std::endl;
}