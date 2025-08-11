#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        

    public :
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &rhs);
        Cat &operator=(const Cat &rhs);
        std::string getType() const;
        void makeSound() const;
        ~Cat();
};