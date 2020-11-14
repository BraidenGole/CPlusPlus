/**
 *  File            :   Cat.h
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-11-09
 *  Description     :   This file will hold the Cat class that will inherit off of
 *                      base class AnimalKingdom.
 */
#ifndef _KCATANIMAL
#define _KCATANIMAL "Cat.h"

// Global string constants.

// Global numeric constants.

/**     -- Class header comment
 *  Name        :   AnimalKingdom - Cat
 *  Purpose     :   Thi is the blueprint out line for what methods a animal
 *                  that is a cat would hold.
 */
class Cat: public AnimalKingdom
{
    /* -- Private -- */
    private:

        bool scratched;
        bool bitten;
        bool jumped;
        double jumpHeight;

    /* -- Public -- */
    public:

        // CONSTRUCTOR
        Cat();
        
        Cat(bool scratched, bool bitten, bool jumped, double jumpHeight);

        // DESTRUCTOR
        ~Cat();

        // ACCESSORS
        const bool GetDidScratch();
        const bool GetDidBite();
        const bool GetJumpStatus();
        const double GetJumpHeight();

        // MUTATORS
        void SetScratchStatus(bool scratched);
        void SetBiteStatus(bool bitten);
        void SetJumpStatus(bool jumped);
        void SetJumpHeight(double jumpHeight);
        void WarCry();
};
#endif