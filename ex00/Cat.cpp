#include "Cat.hpp"


Cat::Cat() : Animal("Cat"){
    std::cout << " Cat constructor called " << std::endl;
}

Cat::Cat( const std::string &type) : Animal(type){
    std::cout << " Cat constructor called " << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal(rhs){
    std::cout << " Cat copy constructor called " << std::endl;
}

Cat &Cat::operator=(const Cat &rhs){
    if (this != &rhs){
        Animal::operator=(rhs);
        std::cout << " Cat copy assignment operator called " << std::endl;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << " Meow Meow " <<std::endl;
}

Cat::~Cat(){
    std::cout << " Cat destructor called " << std::endl;
}