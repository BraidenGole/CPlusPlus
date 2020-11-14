/**
 *  File            :   AnimalKingdom.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is where we will build our animal kingdom methods.
 */
#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
#include <ctime>

#include "AnimalKingdom.h"

const char* animalSizes[KMAXANIMALSIZE] =
{ "Extra Large", "Large", "Medium", "Small" };


// Constructor.
AnimalKingdom::AnimalKingdom()
{
    ;;
}

// Second constructor.
AnimalKingdom::AnimalKingdom(std::string animalName, std::string animalSize,
std::string birthDate, double animalWeight, int animalAge, bool isAwake, bool isAggressive)
{
    SetAnimalsName(animalName);
    SetAnimalSize(animalSize);
    SetAnimalsBirthDate(birthDate);
    SetAnimalsWeight(animalWeight);
    SetAnimalsAge(animalAge);
    SetConsciousness(isAwake);
    SetAggressionStatus(isAggressive);
}

// Destructor.
AnimalKingdom::~AnimalKingdom()
{
    ;;
}

// Gets Animals Name.
const std::string AnimalKingdom::GetAnimalName()
{
    return this->animalName;
}

// Gets Animals size.
const std::string AnimalKingdom::GetAnimalSize()
{
    return this->animalSize;
}

// Gets Animals data of birth.
const std::string AnimalKingdom::GetBirthDate()
{
    return this->dateOfBirth;
}

// Gets Animals weight.
const double AnimalKingdom::GetAnimalsWeight()
{
    return this->animalWeight;
}

// Gets Animals age.
const int AnimalKingdom::GetAnimalsAge()
{
    return this->animalAge;
}

// Gets Animals status.
const bool AnimalKingdom::IsAwake()
{
    return this->isAwake;
}

// Gets Animals aggressions status.
const bool AnimalKingdom::IsAggressive()
{
    return this->isAggressive;
}

// Sets Animals name.
void AnimalKingdom::SetAnimalsName(std::string name)
{
    const int KNAMELENGTH = name.length();
    if (KNAMELENGTH == 0)
    {
        this->animalName = KNONE;
    }
    for (int letters = 0; letters < KNAMELENGTH; letters++)
    {
        if ((std::isalpha(name[letters])) == 0)
        {
            this->animalName = KNONE;
            return;
        }
    }
    this->animalName = name;
}

// Sets Animals size.
void AnimalKingdom::SetAnimalSize(std::string size)
{   
    if ((size.compare(animalSizes[0])) == 0)
    {
        this->animalSize = size;
        return;
    }
    else if ((size.compare(animalSizes[1])) == 0)
    {
        this->animalSize = size;
        return;
    }
    else if ((size.compare(animalSizes[2])) == 0)
    {
        this->animalSize = size;
        return;
    }
    else if ((size.compare(animalSizes[3])) == 0)
    {
        this->animalSize = size;
        return;
    }
    this->animalSize = KNONE;
}

// Set Animals birth date.
void AnimalKingdom::SetAnimalsBirthDate(std::string date)
{   
    if (date.length() == 0) 
    {
        this->dateOfBirth = KNONE;
        return;
    }

    int numberOfDashes = 0;
    int numberOfDigits = 0;
    
    for (unsigned int dateNums = 0; dateNums < date.length(); dateNums++)
    {
        if ((isalpha(date[dateNums])) != 0)
        {
            this->dateOfBirth = "<Invalid Birth date>";
            return;
        }
        else if ((isdigit(date[dateNums])) != 0)
        {   
            ++numberOfDigits;
        }
        else if ((ispunct(date[dateNums])) != 0)
        {
            if (date[dateNums] == '-')
            {
                ++numberOfDashes;
            }
        }
    }
    if ((numberOfDigits == 8) && (numberOfDashes == 2))
    {
        this->dateOfBirth = date;
    }
    else 
    {
        this->dateOfBirth = KNONE;
    }
}

// Set Animals weight.
void AnimalKingdom::SetAnimalsWeight(double weight)
{
    if (weight <= 0)
    {
        this->animalWeight = 0;
        return;
    }
    this->animalWeight = weight;
}

// Sets Animals age.
void AnimalKingdom::SetAnimalsAge(int age)
{
    if (age <= 0)
    {
        this->animalAge = 0;
        return;
    }
    this->animalAge = age;
}

// Set Animals consciousness.
void AnimalKingdom::SetConsciousness(bool isSleeping)
{
    if (isSleeping == true)
    {
        this->isAwake = false;
        return;
    }
    this->isAwake = true;
}

// Set Animals aggression.
void AnimalKingdom::SetAggressionStatus(bool isMad)
{
    if (isMad == true)
    {
        this->isAggressive = true;
        return;
    }
    this->isAggressive = false;
}

// Display Animal War cry !
void AnimalKingdom::WarCry()
{
    std::cout << "None";
}

/**     -- Function header comment
 *  Function        :   displayData
 *  Description     :   This function will display the data supplied.
 *  Parameters      :   array, KLENGTH
 *  Returns         :   None
 */
void displayData(const char* array[], const int KLENGTH, const char* dataType)
{   
    std::cout << std::endl;
    std::cout << "  " << dataType << "\n\t";
    for (int data = 0; data < KLENGTH; data++)
    {   
        std::cout << array[data] << "\n\t";
    }
    std::cout << "\n\n";
}