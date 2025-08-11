#include "Animal.hpp"

Animal::Animal (){
    type = "";
    std::cout << " Animal constructor called " << std::endl;
}

Animal::Animal(const std::string &type){
    this->type = type;
    std::cout << " Animal constructor called " << std::endl;
}

Animal::Animal(const Animal &rhs){
    this->type = rhs.getType();    
    std::cout << " Animal copy constructor called " << std::endl;
}

Animal &Animal::operator=(const Animal &rhs){
    if (this != &rhs){
        this->type = rhs.getType();
        std::cout << " Animal copy assignment operator called " << std::endl;
    }
    return *this;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const{
    std::cout << " Animal is making a sound " << std::endl;
}

Animal::~Animal(){
    std::cout << " Animal destructor called " << std::endl;
}