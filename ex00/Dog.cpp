#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << " Dog constructor called " << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type){
    std::cout << " Dog constructor called " << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal(rhs){
    std::cout << " Dog copy constructor called " << std::endl;
}

Dog &Dog:: operator=(const Dog &rhs){
    if (this != &rhs){
        Animal::operator=(rhs);
        std::cout << " Dog copy assignment operator called " << std::endl;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << " Woof Woof " << std::endl;
}

Dog::~Dog(){
    std::cout << " Dog destructor called " << std::endl;
}