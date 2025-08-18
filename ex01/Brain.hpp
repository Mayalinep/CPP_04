#pragma once    

#include <iostream>
#include <string>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &rhs);
        Brain &operator=(const Brain &rhs);
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
        ~Brain();


};