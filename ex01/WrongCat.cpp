#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    std::cout << " WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type){
    this->type = type;
    std::cout << " WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(rhs){
    std::cout << " WrongCat copy constructor called " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
    if (this != &rhs){
        WrongAnimal::operator=(rhs);
        std::cout << " WrongCat copy assignment operator called " << std::endl;
    }
    return *this;
}

std::string WrongCat::getType() const{
    return this->WrongAnimal::getType();
}

void WrongCat::makeSound() const{
    std::cout << " WrongCat is making a sound " << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << " WrongCat destructor called " << std::endl;
}
