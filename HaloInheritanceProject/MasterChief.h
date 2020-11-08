/**
 *  File            :   MasterChief.h
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is the representation of the "Good guy" also
 *                      know as "Master Chief."
 */
#ifndef _KMASTERCHIEF
#define _KMASTERCHIEF "MasterChief.h"

// Global string constants.

// Global numeric constants.
#define KMAXAMMUNITION 301
#define KMAXAMOUNTOFGRENADES 5

/**     -- Class header comment
 *  Name        :   MasterChief
 *  Purpose     :   This class is used to represent the main
 *                  character of the game.
 */
class MasterChief : public GameCharacter
{
    /** -- Private encapsulation **/
    private:

        int iAmmunitionLevel;
        int iGrenadeCount;

    /** -- Public encapsulation **/
    public:

        // CONSTRUCTORS
        MasterChief();
        MasterChief(int iAmmunitionLevel, int iGrenadeCount);

        // DESCTRUCTORS
        ~MasterChief();

        // ACCESSORS
        const int GetAmmunitionLevel();
        const int GetGrenadeCount();

        // MUTATORS
        void SetAmmunitionLevel(int iAmmunitionLevel);
        void SetGrenadeCount(int iGrenadeCount);
};

#endif