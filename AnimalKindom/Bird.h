/**
 *  File            :   Bird.h
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-07
 *  Description     :   This is the Bird class the last animal that will be
 *                      instantiated in the program in the "AnimalKingdom".
 */
#ifndef _KBIRDANIMAL
#define _KBIRDANIMAL "Bird.h"

// Global string constants.

// Global numeric constants.
#define KMAXBOUNDRY 500

/**     -- Class header comment
 *  Name        :   Bird - AnimalKingdom
 *  Purpose     :   This is the blueprint of the Bird class this will hold
 *                  method prototypes for functions that relate to a Bird object.
 */
class Bird : public AnimalKingdom
{   
    /* -- Private -- */
    private:

        double boundry;
        bool isPecking;
        bool isFlying;

    /* -- Public -- */
    public:

        // CONSTRUCTOR
        Bird();

        Bird(double boundry, bool isPecking, bool isFlying);

        // DESTRUCTOR
        ~Bird();

        // ACCESSORS
        const bool GetFlightStatus();
        const bool GetPeckStatus();
        const double GetFlightBoundary();

        // MUTATORS
        void SetFlightStatus(bool isFlying);
        void SetFlyBoundary(double boundry);
        void SetPeckStatus(bool isPecking);
        void WarCry();
};
#endif