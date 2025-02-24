#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat &obj);
        WrongCat &operator=(const WrongCat &obj);
        ~WrongCat();
        void makeSound() const;
};

#endif