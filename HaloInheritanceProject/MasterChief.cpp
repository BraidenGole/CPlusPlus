/**
 *  File            :   MasterChief.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is where all of our methods will go that
 *                      relates to the class object of "Master Chief."
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "MasterChief.h"

/**     -- Method header comment
 *  Method          :   MasterChief(default)
 *  Description     :   This is the default class constructor for
 *                      the MasterChiefs class.
 *  Parameters      :   None
 *  Returns         :   None
 */
MasterChief::MasterChief()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   MasterChief
 *  Description     :   This is the second constructor that will
 *                      allow for instantiating the amount of bullets
 *                      you will have and the amount of grenades held.
 *  Parameters      :   iAmmunitionLevel, iGrenadeCount
 *  Returns         :   None
 */
MasterChief::MasterChief(int iAmmunitionLevel, int iGrenadeCount)
{
    SetAmmunitionLevel(iAmmunitionLevel);
    SetGrenadeCount(iGrenadeCount);
}

/**     -- Method header comment
 *  Method          :   MasterChief
 *  Description     :   This will destroy a class instance of
 *                      MasterChief.
 *  Parameters      :   None
 *  Returns         :   None
 */
MasterChief::~MasterChief()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GetAmmunitionLevel
 *  Description     :   This will get the level of ammunition
 *                      currently held by Master Chief himself.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int MasterChief::GetAmmunitionLevel()
{
    return this->iAmmunitionLevel;
}

/**     -- Method header comment
 *  Method          :   GetGrenadeCount
 *  Description     :   This method will get the current
 *                      grenade count for Master Chief.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int MasterChief::GetGrenadeCount()
{
    return this->iGrenadeCount;
}

/**     -- Method header comment
 *  Method          :   SetAmmunitionLevel
 *  Description     :   This sets the level of ammunition for the
 *                      class instance of Master Chief.
 *  Parameters      :   iNumberOfBullets
 *  Returns         :   None
 */
void MasterChief::SetAmmunitionLevel(int iNumberOfBullets)
{
    if (iNumberOfBullets >= 0 && iNumberOfBullets < KMAXAMMUNITION)
    {
        this->iAmmunitionLevel = iNumberOfBullets;
        return;
    }
    this->iAmmunitionLevel = 0;
}

/**     -- Method header comment
 *  Method          :   SetGrenadeCount
 *  Description     :   This will set the grenade count for
 *                      the main character Master Chief.
 *  Parameters      :   iNumberOfGrenades
 *  Returns         :   None
 */
void MasterChief::SetGrenadeCount(int iNumberOfGrenades)
{
    if (iNumberOfGrenades >= 1 && iNumberOfGrenades < KMAXAMOUNTOFGRENADES)
    {
        this->iGrenadeCount = iNumberOfGrenades;
        return;
    }
    this->iGrenadeCount = 0;
}