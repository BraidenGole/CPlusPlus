/**
 *  File            :   Elite.h
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is the representation of an Elite
 *                      object in Halo.
 */
#ifndef _KELITE
#define _KELITE "Elite.h"

// Global string constants.

// Global numeric constants.
#define KMAXGUNENERGYLEVEL 100
#define KMAXSWORDENERGYLEVEL 100

/**     -- Class header commment
 *  Name        :   Elite
 *  Purpose     :   This is the representation of a Elite alien
 *                  in the game Halo.
 */
class Elite : public GameCharacter
{
    /** -- Private encapsulation -- **/
    private:

        int iGunEnergyLevel;
        int iSwordEnergyLevel;

    /** -- Private encapsulation -- **/
    public:

        // CONSTRUCTOR
        Elite();
        Elite(int iGunEnergyLevel, int iSwordEnergyLevel);

        // DESCTRUCTOR
        ~Elite();

        // ACCESSORS
        const int GetGunEnergyLevel();
        const int GetSwordEnergyLevel();

        // MUTATORS
        void SetGunEnergyLevel(int iGunEnergyLevel);
        void SetSwordEnergyLevel(int iSwordEnergyLevel);
};
#endif