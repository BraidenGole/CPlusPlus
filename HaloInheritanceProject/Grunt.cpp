/**
 *  File            :   Grunt.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is where we will hold all the methods relating to
 *                      a Grunt object.
 */
#include <iostream>

// Header file.
#include "GameCharacter.h"
#include "Grunt.h"

/**     -- Method header comment
 *  Method          :   Grunt(default)
 *  Description     :   This is the default constructor for the class
 *                      Grunt.
 *  Parameters      :   None
 *  Returns         :   None
 */
Grunt::Grunt()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   Grunt
 *  Description     :   This is the second class constructor for class
 *                      Grunt and we can now instantiate a Grunt object
 *                      with the amount of plasma round & plasma grenades
 *                      they have before the battle.
 *  Parameters      :   None
 *  Returns         :   None
 */
Grunt::Grunt(int iPlasmaRounds, int iPlasmaGrenades)
{
    SetPlasmaRounds(iPlasmaRounds);
    SetPlasmaGrenades(iPlasmaGrenades);
}

/**     -- Method header comment
 *  Method          :   Grunt
 *  Description     :   This will destroy the Halo character Grunt
 *  Parameters      :   None
 *  Returns         :   None
 */
Grunt::~Grunt()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GetPlasmaRounds
 *  Description     :   This will get the proper amount of plasma rounds
 *                      acceptable.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int Grunt::GetPlasmaRounds()
{
    return this->iPlasmaRounds;
}

/**     -- Method header comment
 *  Method          :   GetPlasmaGrenades
 *  Description     :   This method will get the amount of grenades the
 *                      Grunt object has.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int Grunt::GetPlasmaGrenades()
{
    return this->iPlasmaGrenades;
}

/**     -- Method header comment
 *  Method          :   SetPlasmaRounds
 *  Description     :   This allows us to set the amount of plasma rounds
 *                      a Grunt can be initialized with.
 *  Parameters      :   iNumberOfRounds
 *  Returns         :   None
 */
void Grunt::SetPlasmaRounds(int iNumberOfRounds)
{
    if (iNumberOfRounds >= 1 && iNumberOfRounds < KMAXPLASMAROUNDS)
    {
        this->iPlasmaRounds = iNumberOfRounds;
        return;
    }
    this->iPlasmaRounds = 0;
}

/**     -- Method header comment
 *  Method          :   SetPlasmaGrenades
 *  Description     :   This sets the amount of plasma grenades.
 *  Parameters      :   iNumberOfGrenades
 *  Returns         :   None
 */
void Grunt::SetPlasmaGrenades(int iNumberOfGrenades)
{
    if (iNumberOfGrenades >= 1 && iNumberOfGrenades < KPLASMAGRENADELIMIT)
    {
        this->iPlasmaGrenades = iNumberOfGrenades;
        return;
    }
    this->iPlasmaGrenades = 0;
}
