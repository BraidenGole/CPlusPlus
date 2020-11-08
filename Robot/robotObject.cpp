/**
 *  File            :   robotObject.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-22
 *  Description     :   This file will hold all of our constructors, destructors,
 *                      mutators, accessors, and general class methods associated with
 *                      a robot object.
 */
#include <iostream>
#include <string>
#include <ctype.h>

// Header file.
#include "robotObject.h"

/**     -- Method header comment
 *  Method          :   Robot -- CONSTRUCTOR
 *  Description     :   This create a robot object with a custom
 *                      representation.
 *  Parameters      :   None
 *  Returns         :   None
 */
Robot::Robot(bool bOnOrOff, std::string sNameOfRobot, std::string sProcessingUnit,
std::string sGraphicalUnit, std::string sOperatingSystem)
{
    SetRobotMode(bOnOrOff);
    SetRobotName(sNameOfRobot);
    SetProcessingUnit(sProcessingUnit);
    SetGraphicalUnit(sGraphicalUnit);
    SetOperatingSystem(sOperatingSystem);
}

/**     -- Method header comment
 *  Method          :   Robot -- DESTRUCTOR
 *  Description     :   This will destroy a instance of Robot.
 *  Parameters      :   None
 *  Returns         :   None
 */
Robot::~Robot()
{
    std::cout << "\n\tRobot: " << this->sNameOfRobot << " DESTROYED !";
}

/**     -- Method header comment
 *  Method          :   Robot - GetRobotMode
 *  Description     :   This method will get the value of the robots current
 *                      status either "ON" or "OFF".
 *  Parameters      :   None
 *  Returns         :   "ON", "OFF"
 */
const std::string Robot::GetRobotMode()
{
    if (this->bOnOrOff == true)
    {
        return "ON";
    }
    return "OFF";
}

/**     -- Method header comment
 *  Method          :   Robot - GetRobotName
 *  Description     :   This method will get the robots name.
 *  Parameters      :   None
 *  Returns         :   this->sNameOfRobot
 */
const std::string Robot::GetRobotName()
{   
    return this->sNameOfRobot;
}

/**     -- Method header comment
 *  Method          :   Robot - GetProcessor
 *  Description     :   This method will retrieve the CPU unit that will
 *                      be used for the Robot that is being created.
 *  Parameters      :   None
 *  Returns         :   this->sProcessingUnit
 */
const std::string Robot::GetProcessor()
{   
    return this->sProcessingUnit;
}

/**     -- Method header comment
 *  Method          :   GetGraphicsCard
 *  Description     :   This method will retrieve the existing graphics
 *                      card name.
 *  Parameters      :   None
 *  Returns         :   this->sGraphicalUnit
 */
const std::string Robot::GetGraphicsCard()
{
    return this->sGraphicalUnit;
}

/**     -- Method header comment
 *  Method          :   GetOperatingSystem
 *  Description     :   This method will get the operating system that
 *                      the Robot will thrive off of.
 *  Parameters      :   None
 *  Returns         :   this->sOperatingSystem
 */
const std::string Robot::GetOperatingSystem()
{
    return this->sOperatingSystem;
}

/**     -- Method header comment
 *  Method          :   Robot - SetRobotMode
 *  Description     :   This sets the robots current mode either "ON" or "OFF".
 *  Parameters      :   bRobotStatus
 *  Returns         :   None
 */
void Robot::SetRobotMode(bool bRobotStatus)
{
    if (bRobotStatus == true) 
    { 
        this->bOnOrOff = true; 
    }
    else
    {
        this->bOnOrOff = false;
    }
}

/**     -- Method header comment
 *  Method          :   Robot - SetRobotName
 *  Description     :   This method will perform a validation on
 *                      the name supplied.
 *  Parameters      :   sNameCheck
 *  Returns         :   None
 */
void Robot::SetRobotName(std::string sNameCheck)
{   
    int iLetters = 0;
    const int kiAmountOfLetters = sNameCheck.length();
    while (iLetters < kiAmountOfLetters)
    {
        if ((isdigit(sNameCheck[iLetters])) != 0)
        {
            this->sNameOfRobot = "No Name";
            return;
        }
        else if ((ispunct(sNameCheck[iLetters])) != 0)
        {
            this->sNameOfRobot = "No Name";
            return;
        }
        ++iLetters;
    }
    this->sNameOfRobot = sNameCheck;
}

/**     -- Method header comment
 *  Method          :   Robot - SetProcessingUnit
 *  Description     :   This method checks the processor supplied and does a vague
 *                      check on the processor supplied to see if it is a processor at all.
 *  Parameters      :   sCheckProcessor
 *  Returns         :   None
 */
void Robot::SetProcessingUnit(std::string sCheckProcessor)
{   
    // Declare some valid processors for this program.
    const std::string arsProcessors[KPROCESSORLIMIT] =
    { "Intel", "ARM", "Qualcomm", "Huawei" };

    int iProcessors = 0;
    while (iProcessors < KPROCESSORLIMIT)
    {
        if ((sCheckProcessor.compare(arsProcessors[iProcessors])) == 0)
        {   
            this->sProcessingUnit = arsProcessors[iProcessors];
            return;
        }
        ++iProcessors;
    }
    this->sProcessingUnit = "Nothing equipped !";
}

/**     -- Method header comment
 *  Method          :   Robot - SetGraphicalUnit
 *  Description     :   This method will "examine" the card supplied to see if it is
 *                      a graphics card at all.
 *  Parameters      :   sCardToExamine
 *  Returns         :   None
 */
void Robot::SetGraphicalUnit(std::string sCardToExamine)
{   
    // Declare some graphic card manufacturers to compare.
    const std::string arsGraphicCards[KPROCESSORLIMIT] =
    { "Nvidia", "AMD", "Intel", "ASUS" };

    int iCards = 0;
    while (iCards < KPROCESSORLIMIT)
    {
        if ((sCardToExamine.compare(arsGraphicCards[iCards])) == 0)
        {
            this->sGraphicalUnit = sCardToExamine;
            return;
        }
        ++iCards;
    }
    this->sGraphicalUnit = "Nothing equipped !";
}

/**     -- Method header comment
 *  Method          :   Robot - SetOperatingSystem
 *  Description     :   This method will take the operating system given as input and
 *                      perform a comparison on the available list of OS's.
 *  Parameters      :   sOperatingSys
 *  Returns         :   None
 */
void Robot::SetOperatingSystem(std::string sOperatingSys)
{   
    // Declare some operating systems to compare against.
    const std::string arsOperatingSys[KOPERATINGSYSTEMLIMIT] =
    { "Windows", "Mac", "Linux", "Solaris" };

    int iSystems = 0;
    while (iSystems < KOPERATINGSYSTEMLIMIT)
    {
        if ((sOperatingSys.compare(arsOperatingSys[iSystems])) == 0)
        {
            this->sOperatingSystem = sOperatingSys;
            return;
        }
        ++iSystems;
    }
    this->sOperatingSystem = "Environment does not exist !";
}


