/**
 *  File            :   GameCharacter.h
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is the representation of a Game Character
 *                      from Halo.
 */
#ifndef _KGAMECHARACTER
#define _KGAMECHARACTER "GameCharacter.h"

// Global string constants.
#define KDEFAULTNAME "None"

// Global numeric constants.
#define KFULLHEALTH 101

/**     -- Class header comment
 *  Name        :   GameCharacter
 *  Purpose     :   This will represent every game character made
 *                  in this program.
 */
class GameCharacter
{
    /** -- Private encapsulation **/
    private:

        int iHealth;
        std::string sName;

    /** -- Public encapsulation **/
    public:

        // CONSTRUCTORS
        GameCharacter();
        GameCharacter(int iHealth, std::string sName);

        // DESTRUCTORS
        ~GameCharacter();

        // ACCESSORS
        const int GetHealth();
        const std::string GetNameOfCharacter();

        // MUTATORS
        void SetHealth(int iHealth);
        void SetNameOfCharacter(std::string sName);
};
#endif