/**
 *  File            :   Grunt.h
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This file will hold the representation of a
 *                      Grunt object in Halo.
 */
#ifndef _KGRUNT
#define _KGRUNT "Grunt.h"

// Global string constants.

// Global numeric constants.
#define KMAXPLASMAROUNDS 75
#define KPLASMAGRENADELIMIT 3

/**     -- Class header comment
 *  Name        :   Grunt
 *  Purpose     :   This class will represent a Grunt character in the
 *                  game Halo.
 */
class Grunt : public GameCharacter
{
    /** -- Private encapsulation -- **/
    private:

        int iPlasmaRounds;
        int iPlasmaGrenades;

    /** -- Public encapsulation -- **/
    public:

        // CONSTRUCTOR
        Grunt();
        Grunt(int iPlasmaRounds, int iPlasmaGrenades);

        // DESTRUCTOR
        ~Grunt();

        // ACCESSORS
        const int GetPlasmaRounds();
        const int GetPlasmaGrenades();

        // MUTATORS
        void SetPlasmaRounds(int iPlasmaRounds);
        void SetPlasmaGrenades(int iPlasmaGrenades);
};
#endif