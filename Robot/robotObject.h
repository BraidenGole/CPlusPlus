/**
 *  File            :   robotObject.h
 *  Project         :   None
 *  Programmer      :   Braiden Gole
 *  First version   :   2020-04-22
 *  Description     :   This is my first C++ project.
 */
#ifndef _KROBOTOBJECT
#define _KROBOTOBJECT "robotObject.h"

// Global string constants.
#define KROBOTHEADER "\n  < -- Robot Object -- >\n\n"
#define KPROMPT_FOR_ONOFF "\t[Power On/Off]:\n\n\t\t(1). On\n\t\t(0). Off\n\n"
#define KPROMPT_SELECTION "\tTurn On or Off: "
#define KPROMPT_FOR_NAME "\tRobot name: "
#define KPROMPT_FOR_PROCESSOR "\tProcessing unit: "
#define KPROMPT_FOR_GRAPHICSCARD "\tGraphics processor: "
#define KPROMPT_FOR_OS "\tOperating system: "

// Global numeric constants.
#define KPROCESSORLIMIT 4
#define KOPERATINGSYSTEMLIMIT 4

/**     -- Class header comment
 *  Name        :   Robot
 *  Purpose     :   This class holds the representation
 *                  of a robot object and its attributes.
 */
class Robot
{   
    //    -- Private encapsulation --
    private:

        bool bOnOrOff;
        std::string sNameOfRobot;
        std::string sProcessingUnit;
        std::string sGraphicalUnit;
        std::string sOperatingSystem;

    //    -- Public encapsulation --
    public:

        // Robot -- CONSTRUCTORS
        Robot(bool bOnOrOff, std::string sNameOfRobot, std::string sProcessingUnit,
        std::string sGraphicalUnit, std::string sOperatingSystem);

        // Robot -- DESTRUCTOR
        ~Robot();

        // ACCESSOR METHODS.
        const std::string GetRobotMode();
        const std::string GetRobotName();
        const std::string GetProcessor();
        const std::string GetGraphicsCard();
        const std::string GetOperatingSystem();

        // MUTATOR METHODS.
        void SetRobotMode(bool bOnOrOff);
        void SetRobotName(std::string sNameOfRobot);
        void SetProcessingUnit(std::string sProcessor);
        void SetGraphicalUnit(std::string sGraphicsCard);
        void SetOperatingSystem(std::string sOS);
};
#endif