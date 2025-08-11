#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "";
    std::cout << " WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type){
    this->type = type;
    std::cout << " WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs){
    this->type = rhs.getType();
    std::cout << " WrongAnimal copy constructor called " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
    if (this != &rhs){
        this->type = rhs.getType();
        std::cout << " WrongAnimal copy assignment operator called " << std::endl;
    }
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << " WrongAnimal is making a sound " << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << " WrongAnimal destructor called " << std::endl;
} 