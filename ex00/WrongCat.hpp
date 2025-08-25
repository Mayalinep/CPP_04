#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:
    public :
        WrongCat();
        WrongCat(const std::string &type);
        WrongCat(const WrongCat &rhs);
        WrongCat &operator=(const WrongCat &rhs);
        void makeSound() const;
        ~WrongCat();
};