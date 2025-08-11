#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:
    public :
        WrongCat();
        WrongCat(std::string &type);
        WrongCat(const WrongCat &rhs);
        WrongCat &operator=(const WrongCat &rhs);
        std::string getType() const;
        void makeSound() const;
        ~WrongCat();
};