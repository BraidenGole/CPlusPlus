/**
 *  File            :   Bird.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is a inheritance project written in C++.
 */
#include <iostream>

// Header file.
#include "AnimalKingdom.h"
#include "Bird.h"

// Constructor.
Bird::Bird()
{
    std::cout << "\nInstantiate: Bird\n";
}

// Second constructor.
Bird::Bird(double boundry, bool isPecking, bool isFlying)
{
    SetFlyBoundary(boundry);
    SetPeckStatus(isPecking);
    SetFlightStatus(isFlying);
}

// Destructor.
Bird::~Bird()
{
    std::cout << "\nDestroy: Bird";
}

// Gets whether the Bird object is in flight or not.
const bool Bird::GetFlightStatus()
{
    return this->isFlying;
}

// Gets whether Bird object pecked someone or something.
const bool Bird::GetPeckStatus()
{
    return this->isPecking;
}

// Gets the flight boundry. Do not go past !
const double Bird::GetFlightBoundary()
{
    return this->boundry;
}

// Sets the flight status whether the Bird object is flying or not.
void Bird::SetFlightStatus(bool isInFlight)
{   
    if (isInFlight == true)
    {
        this->isFlying = true;
        return;
    }
    this->isFlying = false;
    
}

// Sets the flight range at which the Bird object can fly.
void Bird::SetFlyBoundary(double flightRange)
{
    if (flightRange >= 10 && flightRange <= KMAXBOUNDRY)
    {
        this->boundry = flightRange;
        return;
    }
    this->boundry = 0.00;
}

// Sets whether the Bird should peck someone or something at this moment.
void Bird::SetPeckStatus(bool pecked)
{
    if (pecked == true)
    {
        this->isPecking = true;
        return;
    }
    this->isPecking = false;
}

// Virtual function.
void Bird::WarCry()
{
    std::cout << "\nChirp chirp chirp !\n";
}

