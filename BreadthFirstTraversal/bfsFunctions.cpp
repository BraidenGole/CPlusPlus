/**
 * @file bfsFunctions.cpp
 * @author Braiden Gole
 * @brief This is a breadth traversal.
 * @version 0.1
 * @date 2021-02-24
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>
#include <vector>

#include "bfsFunctions.h"

/**     -- Function header comment
 *  Function        :   MarkSpotsNotVisited
 *  Description     :   This function will prepare the vector in a way so we can
 *                      mark when a node has been visited.
 *  Parameters      :   visitedNodes, numOfNodes
 *  Returns         :   None
 */
std::vector<bool> MarkSpotsNotVisited(std::vector<bool> visitedNodes, const int numOfNodes)
{
    for (int draw = ZERO; draw < numOfNodes; draw++)
    {
        visitedNodes.push_back(false);
    }
    return visitedNodes;
}

/**     -- Function header comment
 *  Function        :   showGraph
 *  Description     :   This method will show the entire graph to the console.
 *  Parameters      :   storage, levels
 *  Returns         :   None
 */
void showGraph(std::vector<int>* storage, const int levels)
{
    int index = ZERO;
    while (storage->empty() == false)
    {   
        std::cout << storage[index].back() << " ";
        if (index == levels) 
        { 
            break;
        }
        std::cout << storage[index + 1].front() << " ";
        ++index;
    }
}