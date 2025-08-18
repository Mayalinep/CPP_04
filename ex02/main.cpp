#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
    Animal *animals[10];
    // Animal *essai = new Animal();
    // essai->makeSound();
    // delete essai;
    // Créer les animaux originaux
    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            animals[i] = new Dog();
            ((Dog*)animals[i])->setIdea(0, "I think, I'm a dog");
        }
        else{
            animals[i] = new Cat();
            ((Cat*)animals[i])->setIdea(0, "I think, I'm a cat");
        }
    }
    
    // Créer des copies des animaux originaux
    for(int i = 5; i < 10; i++){
        if(i % 2 == 0){
            animals[i] = new Dog(*(Dog*)animals[i-5]);
            ((Dog*)animals[i])->setIdea(0, "I'm a copied dog");
        }
        else{
            animals[i] = new Cat(*(Cat*)animals[i-5]);
            ((Cat*)animals[i])->setIdea(0, "I'm a copied cat");
        }
    }
    
    // Afficher les idées de tous les animaux
    std::cout << "\n=== IDÉES DES ANIMAUX ===" << std::endl;
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            std::cout << "Animal " << i << " (Dog): " << ((Dog*)animals[i])->getIdea(0) << std::endl;
            ((Dog*)animals[i])->makeSound();
        }
        else{
            std::cout << "Animal " << i << " (Cat): " << ((Cat*)animals[i])->getIdea(0) << std::endl;
            ((Cat*)animals[i])->makeSound();
        }
    }
    
    // Vérifier la copie profonde
    std::cout << "\n=== VÉRIFICATION COPIE PROFONDE ===" << std::endl;
    std::cout << "Dog original (index 0): " << ((Dog*)animals[0])->getIdea(0) << std::endl;
    std::cout << "Dog copié (index 5): " << ((Dog*)animals[5])->getIdea(0) << std::endl;
    std::cout << "Chat original (index 1): " << ((Cat*)animals[1])->getIdea(0) << std::endl;
    std::cout << "Chat copié (index 6): " << ((Cat*)animals[6])->getIdea(0) << std::endl;
    
    // Nettoyer tous les animaux
    std::cout << "\n=== DESTRUCTION DES ANIMAUX ===" << std::endl;
    for(int i = 0; i < 10; i++){
        delete animals[i];
    }
    
    return 0;
}