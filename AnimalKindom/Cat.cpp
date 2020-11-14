/**
 *  File            :   Cat.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is where we will write methods that relate to
 *                      a Cat object. Where Cat is a subclass of Animal.
 */
#include <iostream>

#include "AnimalKingdom.h"
#include "Cat.h"

// Constructor.
Cat::Cat()
{
    std::cout << "Instantiate: Cat\n";
}

// Second constructor.
Cat::Cat(bool scratch, bool bite, bool jumped, double jumpHeight)
{
    ;;
}

// Destructor.
Cat::~Cat()
{
    std::cout << "\nDestroy: Cat\n";
}

// Gets whether the Cat has scratched anyone.
const bool Cat::GetDidScratch()
{
    return this->scratched;
}

// Gets whether the Cat bite anyone.
const bool Cat::GetDidBite()
{
    return this->bitten;
}

// Gets whether the Cat jumped or not.
const bool Cat::GetJumpStatus()
{
    return this->jumped;
}

// Gets jump height.
const double Cat::GetJumpHeight()
{
    return this->jumpHeight;
}

// Sets whether the Cat has scratch anyone.
void Cat::SetScratchStatus(bool scratch)
{
    if (scratch == true)
    {
        this->scratched = scratch;
        return;
    }
    this->scratched = false;
}

// Sets whether the Cat has bite anyone.
void Cat::SetBiteStatus(bool bite)
{
    if (bite == true)
    {
        this->bitten = bite;
        return;
    }
    this->bitten = false;
}

// Sets whether the Cat Jumped of not.
void Cat::SetJumpStatus(bool jump)
{
    if (jump == true)
    {
        this->jumped = jump;
        return;
    }
    this->jumped = false;
}

// Sets Cat jump height
void Cat::SetJumpHeight(double jumpHeight)
{   
    // If it was not a "real jump" then set to 0.
    if ((isalpha(jumpHeight)) != 0)
    {
        this->jumpHeight = 0;
        return;
    }
    else if ((ispunct(jumpHeight)) != 0)
    {
        this->jumpHeight = 0;
        return;
    }
    else
    {   
        if (jumpHeight < 1.0)
        {
            this->jumpHeight = 0;
            return;
        }
        else if (jumpHeight >= 3.0 && jumpHeight <= 6.0)
        {
            this->jumpHeight = jumpHeight;
            return;
        }
    }
}

// Virtual method from Animal Base class.
void Cat::WarCry()
{
    std::cout << "\nMeow !\n";
}
