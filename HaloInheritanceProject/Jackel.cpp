/**
 *  File            :   Jackel.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is the file that will hold all of our
 *                      methods that relate to the Halo object Jackel.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "Jackel.h"

/**     -- Method header comment
 *  Method          :   Jackel(default)
 *  Description     :   This is the default constructor for the class
 *                      Jackel.
 *  Parameters      :   None
 *  Returns         :   None
 */
Jackel::Jackel()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   Jackel
 *  Description     :   This is the second constructor for the
 *                      class Jackel and will allow us to instantiate
 *                      a Jackel with setting its ammunition level
 *                      and grenade level.
 *  Parameters      :   iAmountOfNeedles, iShieldStrength
 *  Returns         :   None
 */
Jackel::Jackel(int iAmountOfNeedles, int iShieldStrength)
{
    SetNumberOfNeedles(iAmountOfNeedles);
    SetShieldStrength(iShieldStrength);
}

/**     -- Method header comment
 *  Method          :   Jackel
 *  Description     :   This is destroy a class instance of character
 *                      type Jackel.
 *  Parameters      :   None
 *  Returns         :   None
 */
Jackel::~Jackel()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GetNumberOfNeedles
 *  Description     :   This will get the number of needles that
 *                      the Jackel gets instantiated with.
 *  Parameters      :   None
 *  Returns         :   this->iAmountOfNeedles
 */
const int Jackel::GetNumberOfNeedles()
{
    return this->iAmountOfNeedles;
}

/**     -- Method header comment
 *  Method          :   GetShieldStrength
 *  Description     :   This gets the shield strenth as a 
 *                      percentage.
 *  Parameters      :   None
 *  Returns         :   None
 */
const int Jackel::GetShieldStrength()
{
    return this->iShieldStrength;
}

/**     -- Method header comment
 *  Method          :   SetNumberOfNeedles
 *  Description     :   This function sets the number of
 *                      needles that the Jackel gets instantiated
 *                      with.
 *  Parameters      :   iAmountOfNeedles
 *  Returns         :   None
 */
void Jackel::SetNumberOfNeedles(int iAmountOfNeedles)
{
    if (iAmountOfNeedles >= 1 && iAmountOfNeedles < KMAXNEEDLES)
    {
        this->iAmountOfNeedles = iAmountOfNeedles;
        return;
    }
    this->iAmountOfNeedles = 0;
}

/**     -- Method header comment
 *  Method          :   SetShieldStrength
 *  Description     :   This sets the shield strength for
 *                      a Jackel object.
 *  Parameters      :   iStrengthOfShield
 *  Returns         :   None
 */
void Jackel::SetShieldStrength(int iStrengthOfShield)
{
    if (iStrengthOfShield >= 1 && iStrengthOfShield < KMAXSHIELDSTRENGTH)
    {
        this->iShieldStrength = iStrengthOfShield;
        return;
    }
    this->iShieldStrength = 0;
}