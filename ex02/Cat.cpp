#include "Cat.hpp"


Cat::Cat() : Animal("Cat"){

    this->brain = new Brain();
    std::cout << " Cat constructor called " << std::endl;
}

Cat::Cat( const std::string &type) : Animal(type){
    this->brain = new Brain();
    std::cout << " Cat constructor called " << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal(rhs){
    this->brain = new Brain(*rhs.brain);
    std::cout << " Cat copy constructor called " << std::endl;
}

Cat &Cat::operator=(const Cat &rhs){
    if (this != &rhs){
        Animal::operator=(rhs);
        if(this->brain){
            delete this->brain;
            this->brain = NULL;
        }
        this->brain = new Brain(*rhs.brain);
        std::cout << " Cat copy assignment operator called " << std::endl;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << " Meow Meow " <<std::endl;
}

std::string Cat::getIdea(int index) const{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string &idea){
    this->brain->setIdea(index, idea);
}
Cat::~Cat(){
    if(this->brain){
        delete this->brain;
        this->brain = NULL;
    }
    std::cout << " Cat destructor called " << std::endl;
}