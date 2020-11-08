/**
 *  File            :   Jackel.h
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This file holds the representation of a
 *                      Halo object Jackel.
 */
#ifndef _KJACKEL
#define _KJACKEL "Jackel.h"

// Global string constants.

// Global numeric constants.
#define KMAXNEEDLES 81
#define KMAXSHIELDSTRENGTH 201

/**     -- Class header comment
 *  Name        :   Jackel
 *  Purpose     :   This is the representation of a Jackel character
 *                  in Halo.
 */
class Jackel : public GameCharacter
{   
    /** -- Private encapsulation -- **/
    private:

        int iAmountOfNeedles;
        int iShieldStrength;

    /** -- Public encapsulation -- **/
    public:

        // CONSTRUCTOR
        Jackel();
        Jackel(int iAmountOfNeedles, int iShieldStrength);

        // DESTRUCTOR
        ~Jackel();

        // ACCESSORS
        const int GetNumberOfNeedles();
        const int GetShieldStrength();

        // MUTATORS
        void SetNumberOfNeedles(int iAmountOfNeedles);
        void SetShieldStrength(int iShieldStrength);
};
#endif