/**
 *  File            :   Animal.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is an inheritance project in C++ with virtual functions.
 *                      The purpose of the project is to provide myself with functions
 *                      to test. I wanted experience on what it is like to write tests
 *                      cases for programs and thinking of different inputs to sub into
 *                      each case. Also gathering an idea as to what test to run and what
 *                      kind.
 * 
 *      Project made for just testing and getting a review of C++.
 */
#include <iostream>
#include <string>

// Header files.
#include "AnimalKingdom.h"
#include "Cat.h"
#include "Bird.h"

// Function prototypes.
void showAnimal(AnimalKingdom* pAnimal);

int main()
{   
    Bird* bird = new Bird();
    Cat* cat = new Cat();

    AnimalKingdom* AnimalBird = bird;
    AnimalKingdom* AnimalCat = cat;

    // Animal Class methods.
    AnimalBird->SetAnimalsName("Bird");
    AnimalCat->SetAnimalsName("Cat");

    AnimalBird->SetAnimalSize("Medium");
    AnimalCat->SetAnimalSize("Small");

    AnimalBird->SetAnimalsBirthDate("2003-10-05");
    AnimalCat->SetAnimalsBirthDate("2005-25-11");

    AnimalBird->SetAnimalsWeight(1.2);
    AnimalCat->SetAnimalsWeight(3.5);

    AnimalBird->SetAnimalsAge(0.5);
    AnimalCat->SetAnimalsAge(1);

    AnimalBird->SetConsciousness(true);
    AnimalCat->SetConsciousness(true);

    AnimalBird->SetAggressionStatus(true);
    AnimalCat->SetAggressionStatus(true);

    showAnimal(AnimalBird);
    showAnimal(AnimalCat);

    AnimalBird->SetConsciousness(false);
    AnimalCat->SetConsciousness(false);

    delete AnimalBird;
    delete AnimalCat;
    return 0;
}

/**     -- Function header comment
 *  Function        :   showAnimal
 *  Description     :   This function will display each animal an its
 *                      attributes.
 *  Parameters      :   pAnimal
 *  Returns         :   None
 */
void showAnimal(AnimalKingdom* pAnimal) 
{   
    std::cout << std::endl;
    std::cout << pAnimal->GetAnimalName() << std::endl;
    std::cout << pAnimal->GetAnimalSize() << std::endl;
    std::cout << pAnimal->GetBirthDate() << std::endl;
    std::cout << pAnimal->GetAnimalsWeight() << std::endl;
    std::cout << pAnimal->GetAnimalsAge() << std::endl;
    std::cout << pAnimal->IsAwake() << std::endl;
    std::cout << pAnimal->IsAggressive() << std::endl;
    pAnimal->WarCry();
    std::cout << std::endl;
}

