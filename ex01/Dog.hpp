#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog();
        void makeSound() const;

        void setBrainIdea(int index, std::string idea);
        std::string getBrainIdea(int index);
};

#endif