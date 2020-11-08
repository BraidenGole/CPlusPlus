/**
 *  File            :   BattleGround.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - Updated (2020-11-08)
 *  Description     :   This is the main "Battle ground" where a combat
 *                      battle gets created.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "MasterChief.h"
#include "Grunt.h"
#include "Jackel.h"
#include "Elite.h"

// Extra functions.
#include "createHaloCharacter.h"
#include "dialogue.h"

// Function prototypes.
void displayHaloCharacter(GameCharacter* pCharacter);

int main(void)
{   
    // Creating characters.
    MasterChief* pMasterCheif = new MasterChief();
    Grunt* pGrunt = new Grunt();
    Jackel* pJackel = new Jackel();
    Elite* pElite = new Elite();

    // Instantiate all the Halo characters.
    createMasterChief(pMasterCheif);
    createGrunt(pGrunt);
    createJackel(pJackel);
    createElite(pElite);

    // Output Halo data to console.
    displayHaloCharacter(pMasterCheif);
    displayHaloCharacter(pGrunt);
    displayHaloCharacter(pJackel);
    displayHaloCharacter(pElite);

    /*===============================
           [ BATTLE GROUNDS ]
    ================================*/
    battleGroundDialogue(pMasterCheif, pGrunt, pJackel, pElite);
    
    // Free all of the dynamically allocated memory.
    delete pMasterCheif;
    delete pGrunt;
    delete pJackel;
    delete pElite;
    return 0;
}

/**     -- Function header comment
 *  Function        :   displayHaloCharacter
 *  Description     :   This takes in the GameCharacter that can be
 *                      instantiated as one of the following objects
 *                      Master Chief, Grunt, Jackel, or Elite.
 *  Parameters      :   pCharacter
 *  Returns         :   None
 */
void displayHaloCharacter(GameCharacter* pCharacter)
{   
    std::cout << "\n  -- Character Summary -- \n\n";
    std::cout << "\tHealth: " << pCharacter->GetHealth() << "%" << std::endl;
    std::cout << "\tName: " << pCharacter->GetNameOfCharacter() << std::endl;
}