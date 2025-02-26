#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public AAnimal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat();
        void makeSound() const;
};

#endif