#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n=== Test des constructeurs ===\n" << std::endl;
    
    const Animal* parent = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "\n=== Test des getType ===\n" << std::endl;
    
    std::cout << "Type of dog: " << dog->getType() << std::endl;
    std::cout << "Type of cat: " << cat->getType() << std::endl;
    std::cout << "Type of parent: " << parent->getType() << std::endl;
    
    std::cout << "\n=== Test des makeSound ===\n" << std::endl;
    
    cat->makeSound();
    dog->makeSound();
    parent->makeSound(); 
    
    std::cout << "\n=== Test des destructeurs ===\n" << std::endl;
    
    delete parent;
    delete dog;
    delete cat;

    std::cout << "\n=== Test du WrongAnimal et WrongCat ===\n" << std::endl;
    
    const WrongAnimal* wrong_parent = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    
    std::cout << "\nType of wrong_cat: " << wrong_cat->getType() << std::endl;
    std::cout << "Type of wrong_parent: " << wrong_parent->getType() << std::endl;
    
    std::cout << "\nTest des makeSound pour WrongAnimal/WrongCat:\n" << std::endl;
    wrong_cat->makeSound();
    wrong_parent->makeSound();
    
    std::cout << "\n=== Test des destructeurs Wrong ===\n" << std::endl;
    
    delete wrong_cat;
    delete wrong_parent;

    std::cout << "\n=== Test des constructeurs de copie et opérateurs d'affectation ===\n" << std::endl;
    
    Cat cat1;
    cat1 = Cat("Minou");
    Cat cat2(cat1);
    
    Dog dog1;
    dog1 = Dog("Rex");
    Dog dog2(dog1);
    
    std::cout << "\nTest des makeSound pour les copies:\n" << std::endl;
    cat2.makeSound();
    dog2.makeSound();
    
    std::cout << "\n=== Fin des tests ===\n" << std::endl;
    
    return 0;
}
