#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n=== Test des constructeurs ===\n" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\n=== Test des getType ===\n" << std::endl;
    
    std::cout << "Type de j: " << j->getType() << std::endl;
    std::cout << "Type de i: " << i->getType() << std::endl;
    std::cout << "Type de meta: " << meta->getType() << std::endl;
    
    std::cout << "\n=== Test des makeSound ===\n" << std::endl;
    
    i->makeSound(); // va faire le son du chat
    j->makeSound(); // va faire le son du chien
    meta->makeSound(); // va faire le son de l'animal
    
    std::cout << "\n=== Test des destructeurs ===\n" << std::endl;
    
    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Test du WrongAnimal et WrongCat ===\n" << std::endl;
    
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    
    std::cout << "\nType de wrong_cat: " << wrong_cat->getType() << std::endl;
    std::cout << "Type de wrong_meta: " << wrong_meta->getType() << std::endl;
    
    std::cout << "\nTest des makeSound pour WrongAnimal/WrongCat:\n" << std::endl;
    wrong_cat->makeSound(); // va faire le son du WrongAnimal (pas du WrongCat!)
    wrong_meta->makeSound();
    
    std::cout << "\n=== Test des destructeurs Wrong ===\n" << std::endl;
    
    delete wrong_cat;
    delete wrong_meta;

    std::cout << "\n=== Test des constructeurs de copie et opérateurs d'affectation ===\n" << std::endl;
    
    Cat chat1;
    chat1 = Cat("Minou");
    Cat chat2(chat1);
    
    Dog chien1;
    chien1 = Dog("Rex");
    Dog chien2(chien1);
    
    std::cout << "\nTest des makeSound pour les copies:\n" << std::endl;
    chat2.makeSound();
    chien2.makeSound();
    
    std::cout << "\n=== Fin des tests ===\n" << std::endl;
    
    return 0;
}
