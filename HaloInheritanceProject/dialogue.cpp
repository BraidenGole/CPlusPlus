/**
 *  File            :   dialogue.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This is the file that holds the dialogue for
 *                      the battle grounds.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "MasterChief.h"
#include "Grunt.h"
#include "Jackel.h"
#include "Elite.h"

/**     -- Function header comment
 *  Function        :   battleGroundDialogue
 *  Description     :   This will hold all of the dialogue for
 *                      the war that will happen.
 *  Parameters      :   pMasterCheif, pGrunt, pJackel, pElite
 *  Returns         :   None
 */
void battleGroundDialogue(MasterChief* pMasterCheif, Grunt* pGrunt,
Jackel* pJackel, Elite* pElite)
{
    std::cout << "\n[ BATTLE GROUND ]";

    std::cout << "\n\nMaster chief walks around a corner ...\n";
    std::cout << "> Grunt: Oh, There he is !\n";
    std::cout << "> Grunt: Shoot !\n\n";

    int iGruntsAmmoTracker = 0;
    iGruntsAmmoTracker = pGrunt->GetPlasmaRounds() - 33;
    std::cout << "Grunts ammo count: " << iGruntsAmmoTracker << std::endl;

    int iChiefsHealth = 0;
    iChiefsHealth = pMasterCheif->GetHealth() - 25;
    
    std::cout << "Chiefs health: " << iChiefsHealth << "%" << "\n\n";
    std::cout << "> Chief tosses a grenade ..." << std::endl;

    int iChiefsGrenadeCount = 0;
    iChiefsGrenadeCount = pMasterCheif->GetGrenadeCount() - 1;
    std::cout << "Chiefs grenade count: " << iChiefsGrenadeCount << std::endl;

    int iGruntsHealth = 0;
    iGruntsHealth = pGrunt->GetHealth() - 100;
    std::cout << "Grunts health: " << iGruntsHealth << "% [ DEAD ]" << std::endl;

    std::cout << "\n> Master chief sees Jackel and shoots !\n";
    
    int iChiefsAmmoTracker = 0;
    iChiefsAmmoTracker = pMasterCheif->GetAmmunitionLevel() - 46;
    std::cout << "Master chiefs bullet count: " << iChiefsAmmoTracker << std::endl;

    int iJackelsHealth = 0;
    iJackelsHealth = pJackel->GetHealth() - 56;
    std::cout << "Jackels health: " << iJackelsHealth << std::endl;

    std::cout << "\n> Jackel shoots back at Master chief !" << std::endl;

    int iJackelAmmoTracker = 0;
    iJackelAmmoTracker = pJackel->GetNumberOfNeedles() - 15;
    std::cout << "Jackel needle count: " << iJackelAmmoTracker << std::endl;

    iChiefsHealth -= 23;
    std::cout << "Master chiefs health: " << iChiefsHealth << "\n\n";
    std::cout << "> Master chief shoots back at the Jackel !\n";

    iJackelsHealth -= 44;
    std::cout << "Jackels health: " << iJackelsHealth << "%" << " [ DEAD ]" << "\n\n";

    std::cout << "> Elite WORT WORT, SLICE !" << std::endl;
    
    iChiefsHealth -= 34;
    std::cout << "Master chiefs health: " << iChiefsHealth << "%" << std::endl;

    int iElitesEnerySwordLevel = 0;
    iElitesEnerySwordLevel = pElite->GetSwordEnergyLevel() - 56;
    std::cout << "Elites sword damage: " << iElitesEnerySwordLevel << std::endl;

    std::cout << "\n> Master chief throws two grenades !\n";
    
    iChiefsGrenadeCount -= 1;
    std::cout << "Master chiefs grenade count: " << iChiefsGrenadeCount << std::endl;

    int iEliteHealth = 0;
    iEliteHealth = pElite->GetHealth() - 100;
    std::cout << "Elites health: " << iEliteHealth << "%" << " [ DEAD ]" << std::endl;

    std::cout << "\nMASTER CHIEF WINS !!!";
}
