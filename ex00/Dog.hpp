#pragma once

#include "Animal.hpp"

class Dog : public Animal{
    private:
    

    public :
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &rhs);
        Dog &operator=(const Dog &rhs);
        void makeSound() const;
        ~Dog();
};