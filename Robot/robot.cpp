/**
 *  File            :   robot.cpp
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-22 - (2020-11-07) - updated comments
 *  Description     :   This is my first C++ project.
 */
#include <iostream>

// Header file.
#include "robotObject.h"

// Function prototypes.
void displayRobotInstance(Robot* pRobot);

int main(void)
{   
    // Variables to pass into the set methods to be validated.
    bool bRobotMode = -1;
    std::string sNameOfBot = "";
    std::string sProcessor = "";
    std::string sGraphicsCard = "";
    std::string sArchitecture = "";

    // ----- Create the Robot instance. -----
    printf(KPROMPT_FOR_ONOFF);
    printf(KPROMPT_SELECTION);
    std::cin >> bRobotMode;
    if (std::cin.fail()) 
    { 
        std::cin.clear(); 
        getchar(); 
    }

    printf(KPROMPT_FOR_NAME);
    std::cin >> sNameOfBot;

    printf(KPROMPT_FOR_PROCESSOR);
    std::cin >> sProcessor;

    printf(KPROMPT_FOR_GRAPHICSCARD);
    std::cin >> sGraphicsCard;

    printf(KPROMPT_FOR_OS);
    std::cin >> sArchitecture;
    // ----- End creation of the robot. -----

    // Dynamically allocate a new instance of Robot.
    Robot* pRobot = new Robot(bRobotMode, sNameOfBot, sProcessor,
    sGraphicsCard, sArchitecture);

    // Display the Robot after creation.
    displayRobotInstance(pRobot);

    // Free the dynamically allocated instance.
    delete pRobot;
    return 0;
}

/**     -- Function header comment
 *  Function        :   displayRobotInstance
 *  Description     :   This will retrieve all attibutes set by the user
 *                      and display the entire set of attributes in a neat format.
 *  Parameters      :   pRobot
 *  Returns         :   None
 */
void displayRobotInstance(Robot* pRobot)
{
    std::cout << KROBOTHEADER;
    std::cout << "\tMode    :  " << pRobot->GetRobotMode() << std::endl;
    std::cout << "\tName    :  " << pRobot->GetRobotName() << std::endl;
    std::cout << "\tCPU     :  " << pRobot->GetProcessor() << std::endl;
    std::cout << "\tGPU     :  " << pRobot->GetGraphicsCard() << std::endl;
    std::cout << "\tSystem  :  " << pRobot->GetOperatingSystem() << std::endl;
}