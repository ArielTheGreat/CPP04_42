#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
    {
			this->ideas[i] = other.ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int integer, std::string idea)
{
	ideas[integer] = idea;
}

std::string Brain::getIdea(int integer)
{
	return (ideas[integer]);
}