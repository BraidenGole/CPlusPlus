/**
 *  File            :   AnimalKingdom.h
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is a inheritance project written in C++.
 */
#ifndef _KANIMALKINGDOM
#define _KAMINALKINGDOM "AnimalKingdom.h"

// Global string constants.
#define KNONE "None"

// Global numeric constants.
#define KMAXANIMALSIZE 4
#define KMAXAGE 100

/**     -- Class header comment
 *  Name        :   AnimalKingdom
 *  Purpose     :   This class represents the entire animal kingdom
 *                  in which we will be inherting attributes and methods from.
 */
class AnimalKingdom
{
    //  -- Private Encapsulation --
    private:

        std::string animalName;
        std::string animalSize;
        std::string dateOfBirth;
        double animalWeight;
        int animalAge;
        bool isAwake;
        bool isAggressive;

    //  -- Public Encapsulation --
    public:

        // AnimalKingdom -- CONSTRUCTORS
        AnimalKingdom();
        AnimalKingdom(std::string animalName, std::string animalSize,
        std::string SetAnimalsBirthDate, double animalWeight, int animalAge,
        bool isAwake, bool isAggressive);

        // AnimalKingdom -- DESTRUCTOR
        virtual ~AnimalKingdom();

        // ACCESSOR METHODS
        const std::string GetAnimalName();
        const std::string GetAnimalSize();
        const std::string GetBirthDate();
        const double GetAnimalsWeight();
        const int GetAnimalsAge();
        const bool IsAwake();
        const bool IsAggressive();

        // MUTATOR METHODS
        void SetAnimalsName(std::string animalName);
        void SetAnimalSize(std::string animalSize);
        void SetAnimalsBirthDate(std::string dateOfBirth);
        void SetAnimalsWeight(double animalWeight);
        void SetAnimalsAge(int animalAge);
        void SetConsciousness(bool isAwake);
        void SetAggressionStatus(bool isAggressive);

        // VIRTUAL METHODS
        virtual void WarCry();
};

// Function prototypes.
void displayData(const char* array[], const int KLENGTH, const char* dataType);
#endif