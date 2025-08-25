#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;

    public :
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &rhs);
        Cat &operator=(const Cat &rhs);
        void makeSound() const;
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
        ~Cat();
};