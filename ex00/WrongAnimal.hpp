#pragma once

#include <iostream>
#include <string>

class WrongAnimal{
    protected:
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &rhs);
        WrongAnimal &operator=(const WrongAnimal &rhs);
        std::string getType() const;
        void makeSound() const;
        ~WrongAnimal();
};