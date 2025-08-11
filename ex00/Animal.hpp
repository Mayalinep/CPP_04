#pragma once

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public : 
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &rhs);
        Animal &operator=(const Animal &rhs);
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();

};