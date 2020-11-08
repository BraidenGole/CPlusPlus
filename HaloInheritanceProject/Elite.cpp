/**
 *  File            :   Elite.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is where we will hold all methods
 *                      relating to an Elite Object.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "Elite.h"

/**     -- Method header comment
 *  Method          :   Elite(default)
 *  Description     :   This is the default class constructor for
 *                      the Halo character Elite.
 *  Parameters      :   None
 *  Returns         :   None
 */
Elite::Elite()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   Elite
 *  Description     :   This is the second class constructor
 *                      that allows us to initialize two fields
 *                      on object instantiation.
 *  Parameters      :   iGunEnergyLevel, iSwordEnergyLevel
 *  Returns         :   None
 */
Elite::Elite(int iGunEnergyLevel, int iSwordEnergyLevel)
{
    SetGunEnergyLevel(iGunEnergyLevel);
    SetSwordEnergyLevel(iSwordEnergyLevel);
}

/**     -- Method header comment
 *  Method          :   Elite
 *  Description     :   This will destroy a class instance of
 *                      Halo character Elite.
 *  Parameters      :   None
 *  Returns         :   None
 */
Elite::~Elite()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GetGunEnergyLevel
 *  Description     :   This gets the current energy level
 *                      of the gun the Elite is using.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int Elite::GetGunEnergyLevel()
{
    return this->iGunEnergyLevel;
}

/**     -- Method header comment
 *  Method          :   GetSwordEnergyLevel
 *  Description     :   This will get the current energy level
 *                      of the Elites sword.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int Elite::GetSwordEnergyLevel()
{
    return this->iSwordEnergyLevel;
}

/**     -- Method header comment
 *  Method          :   SetGunEnergyLevel
 *  Description     :   This will set the energy level for the
 *                      Elites gun.
 *  Parameters      :   None
 *  Returns         :   None
 */
void Elite::SetGunEnergyLevel(int iEnergyLevel)
{   
    if (iEnergyLevel >= 1 && iEnergyLevel < KMAXGUNENERGYLEVEL)
    {
        this->iGunEnergyLevel = iEnergyLevel;
        return;
    }
    this->iGunEnergyLevel = 0;
}

/**     -- Method header comment
 *  Method          :   SetSwordEnergyLevel
 *  Description     :   This allows us to set the Elites
 *                      melee sword energy level on instantiation.
 *  Parameters      :   iEnergyLevel
 *  Returns         :   None
 */
void Elite::SetSwordEnergyLevel(int iEnergyLevel)
{   
    const int kiFifty = 50;
    if (iEnergyLevel >= kiFifty && iEnergyLevel < KMAXSWORDENERGYLEVEL)
    {
        this->iSwordEnergyLevel = iEnergyLevel;
        return;
    }
    this->iSwordEnergyLevel = 0;
}