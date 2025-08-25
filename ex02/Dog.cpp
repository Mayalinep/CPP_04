#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    this->brain = new Brain();
    std::cout << " Dog constructor called " << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type){
    this->brain = new Brain();
    std::cout << " Dog constructor called " << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal(rhs){
    this->brain = new Brain(*rhs.brain);
    std::cout << " Dog copy constructor called " << std::endl;
}

Dog &Dog:: operator=(const Dog &rhs){
    if (this != &rhs){
        Animal::operator=(rhs);
        if(this->brain){
            delete this->brain;
            this->brain = NULL;
        }
        this->brain = new Brain(*rhs.brain);
        std::cout << " Dog copy assignment operator called " << std::endl;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << " Woof Woof " << std::endl;
}

std::string Dog::getIdea(int index) const{
    return this->brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string &idea){
    this->brain->setIdea(index, idea);
}

Dog::~Dog(){
    if(this->brain){
        delete this->brain;
        this->brain = NULL;
    }
    std::cout << " Dog destructor called " << std::endl;
}