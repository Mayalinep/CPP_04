#include "Brain.hpp"



Brain::Brain(){
    for(int i = 0; i < 100; i++){
        this->ideas[i] = "";
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &rhs){
    for(int i = 0; i < 100; i++){
        this->ideas[i] = rhs.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs){
    if(this != &rhs){
        for(int i = 0; i < 100; i++){
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index) const{
    if(index < 0 || index >= 100){
        std::cout << "Index out of bounds" << std::endl;
        return "";
    }
    return this->ideas[index];
}
void Brain::setIdea(int index, const std::string &idea){
    if(index < 0 || index >= 100){
        std::cout << "Index out of bounds" << std::endl;
        return;
    }
    this->ideas[index] = idea;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}


