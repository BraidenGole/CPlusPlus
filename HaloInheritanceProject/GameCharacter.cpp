/**
 *  File            :   GameCharacter.cpp
 *  Project         :   Halo
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-26 - (2020-11-08)
 *  Description     :   This file holds all methods for every Game Character
 *                      that the system builds.
 */
#include <iostream>

// Header files.
#include "GameCharacter.h"

/**     -- Method header comment
 *  Method          :   GameCharacter(default)
 *  Description     :   This is the default GameCharacter constructor.
 *  Parameters      :   None
 *  Returns         :   None
 */
GameCharacter::GameCharacter()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GameCharacter
 *  Description     :   This is a class constructor that allows us to set
 *                      the name and health of the character instantiated.
 *  Parameters      :   health, name
 *  Returns         :   None
 */
GameCharacter::GameCharacter(int health, std::string name)
{
    SetHealth(health);
    SetNameOfCharacter(name);
}

/**     -- Method header comment
 *  Method          :   GameCharacter
 *  Description     :   This is the destructor for a game character.
 *  Parameters      :   None
 *  Returns         :   None
 */
GameCharacter::~GameCharacter()
{
    ;;
}

/**     -- Method header comment
 *  Method          :   GetHealth
 *  Description     :   This gets the current health level for the
 *                      GameCharacter.
 *  Parameters      :   None
 *  Returns         :   this->iHealth
 */
const int GameCharacter::GetHealth()
{
    return this->iHealth;
}

/**     -- Method header comment
 *  Method          :   GetNameOfCharacter
 *  Description     :   This function gets the name of the game character.
 *  Parameters      :   None
 *  Returns         :   None
 */
const std::string GameCharacter::GetNameOfCharacter()
{
    return this->sName;
}

/**     -- Method header comment
 *  Method          :   SetHealth
 *  Description     :   This method will set the health level for each
 *                      GameCharacter.
 *  Parameters      :   health
 *  Returns         :   None
 */
void GameCharacter::SetHealth(int health)
{
    if (health >= 1 && health < KFULLHEALTH)
    {
        this->iHealth = health;
        return;
    }
    this->iHealth = 0;
}

/**     -- Method header comment
 *  Method          :   SetNameOfCharacter
 *  Description     :   This method sets the name of the character.
 *  Parameters      :   name
 *  Returns         :   None
 */
void GameCharacter::SetNameOfCharacter(std::string name)
{
    if ((name.compare("Master chief")) == 0)
    {
        this->sName = name;
    }
    else if ((name.compare("Grunt")) == 0)
    {
        this->sName = name;
    }
    else if ((name.compare("Jackel")) == 0)
    {
        this->sName = name;
    }
    else if ((name.compare("Elite")) == 0)
    {
        this->sName = name;
    }
    else
    {
        this->sName = KDEFAULTNAME;
    }
}