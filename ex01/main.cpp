#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
    std::cout << "\n=== CREATION DU TABLEAU D'ANIMAUX ===\n" << std::endl;
    
    // Créer un tableau de 10 animaux
    Animal *animals[8];
    
    // Remplir la première moitié avec des Dogs
    for(int i = 0; i < 4; i++){
        animals[i] = new Dog();
    }
    
    // Remplir la deuxième moitié avec des Cats
    for(int i = 4; i < 8; i++){
        animals[i] = new Cat();
    }
    
    std::cout << "\n=== TEST DES SONS ===\n" << std::endl;
    for(int i = 0; i < 8; i++){
        std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n=== TEST DE COPIE PROFONDE ===\n" << std::endl;
    Dog originalDog;
    originalDog.setIdea(0, "I'm the original dog");
    
    Dog copiedDog(originalDog);
    copiedDog.setIdea(0, "I'm a copied dog");
    
    std::cout << "Original dog idea: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copied dog idea: " << copiedDog.getIdea(0) << std::endl;


    std::cout << "\n=== TEST DE SCOPE ===\n" << std::endl;
    Dog Scope;
    Scope.setIdea(0, "I'm on scope");
    {
        std::cout << std::endl;
        Dog temp = Scope;
        std::cout << std::endl;
        std::cout << "Dans le scope - Scope: " << Scope.getIdea(0) << std::endl;
        std::cout << "Dans le scope - temp: " << temp.getIdea(0) << std::endl;
        std::cout << std::endl;
    } 
    std::cout << std::endl;
    std::cout << "Après scope - Scope: " << Scope.getIdea(0) << std::endl;
    std::cout << std::endl;
    Dog assignTestScope;
    std::cout << std::endl;
    assignTestScope = Scope;
    std::cout << "Après affectation: " << assignTestScope.getIdea(0) << std::endl;
    std::cout << std::endl;
    std::cout << "\n=== DESTRUCTION POLYMORPHE ===\n" << std::endl;
    for(int i = 0; i < 8; i++){
        delete animals[i];
    }
    
    return 0;
}