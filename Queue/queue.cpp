/**
 * @file queue.cpp
 * @author Braiden Gole
 * @brief This is my first project on GitHub for C++ and this will be
 *        a Queue implementation. 
 * 
 * [NOTE:] This is my first C++ algorithm implementation !
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>

// Header files.
#include "queueOp.h"

// Function prototypes.
void showQueue(Queue* queue);

int main() 
{   
    Queue* storage = NULL;
    Queue* operation = new Queue(SIZEOFQUEUE);

    int entry = 0;
    int countUntilBreak = 0;

    bool keepFillingQueue = true;
    while (keepFillingQueue)
    {   
        std::cout << "Enter in a number: ";
        if (!(std::cin >> entry))
        {   
            std::cerr << "\n\tNo characters, only numbers !\n\n";
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        else
        {   
            storage = operation->EnQueue(operation, entry);
            ++countUntilBreak;

            if (countUntilBreak == SIZEOFQUEUE)
            {
                break;
            }

            // Collect the current size of the queue.
            operation->currentSize = countUntilBreak;
        }
    }
    
    // Display the peek of the queue.
    std::cout << "\nPeek of Queue: "<< operation->GetPeek(operation) << std::endl;

    // Uncomment to dequeue the numbers.
    //storage = operation->DeQueue(operation);
    //storage = operation->DeQueue(operation);
    //storage = operation->DeQueue(operation);

    showQueue(storage);

    // Make sure to release dynamic resources !
    delete[] operation;
    return 0;
}

/**     -- Function header comment
 *  Function        :   showQueue
 *  Description     :   This function will display all of the numbers in the
 *                      queue.
 *  Parameters      :   queue
 *  Returns         :   None
 */
void showQueue(Queue* queue)
{   
    std::cout << "\n\n -- Queue --\n";
    int size = queue->GetInitSize();
    for (int nums = 0; nums < size; nums++)
    {   
        if (queue[nums].data != 0)
        {
            std::cout << '\t' << queue[nums].data << std::endl;
        }
    }
}