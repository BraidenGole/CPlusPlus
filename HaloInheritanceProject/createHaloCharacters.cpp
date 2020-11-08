/**
 *  File            :   createHaloCharacters.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This file is meant to be used to create Halo
 *                      game characters.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"
#include "MasterChief.h"
#include "Grunt.h"
#include "Jackel.h"
#include "Elite.h"

/**     -- Function header comment
 *  Function        :   createMasterChief
 *  Description     :   This function purpose is to instantiate
 *                      the Master Chief object.
 *  Parameters      :   pChief
 *  Returns         :   None
 */
void createMasterChief(MasterChief* pChief)
{
    /** -- Master Chief Creation -- **/
    pChief->SetHealth(100);
    pChief->SetNameOfCharacter("Master chief");
    pChief->SetAmmunitionLevel(150);
    pChief->SetGrenadeCount(4);
    /** -- End Master Chief Creation -- **/
}

/**     -- Function header comment
 *  Function        :   createGrunt
 *  Description     :   This function is used to instantiate
 *                      a Grunt object.
 *  Parameters      :   pGrunt
 *  Returns         :   None
 */
void createGrunt(Grunt* pGrunt)
{
    /** -- Grunt Creation -- **/
    pGrunt->SetHealth(100);
    pGrunt->SetNameOfCharacter("Grunt");
    pGrunt->SetPlasmaRounds(72);
    pGrunt->SetPlasmaGrenades(1);
    /** -- End Grunt Creation -- **/
}

/**     -- Function header comment
 *  Function        :   createJackel
 *  Description     :   This function will instantiate
 *                      a Jackel object.
 *  Parameters      :   pJackel
 *  Returns         :   None
 */
void createJackel(Jackel* pJackel)
{
    /** -- Jackel Creation -- **/
    pJackel->SetHealth(100);
    pJackel->SetNameOfCharacter("Jackel");
    pJackel->SetNumberOfNeedles(79);
    pJackel->SetShieldStrength(200);
    /** -- End Jackel Creation -- **/
}

/**     -- Function header comment
 *  Function        :   createElite
 *  Description     :   This function will instantiate an Elite object.
 *  Parameters      :   pElite
 *  Returns         :   None
 */
void createElite(Elite* pElite)
{
    /** -- Elite Creation -- **/
    pElite->SetHealth(100);
    pElite->SetNameOfCharacter("Elite");
    pElite->SetGunEnergyLevel(99);
    pElite->SetSwordEnergyLevel(78);
    /** -- End Elite Creation -- **/
}