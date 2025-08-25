#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;

    public :
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &rhs);
        Dog &operator=(const Dog &rhs);
        void makeSound() const;
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
        ~Dog();
};