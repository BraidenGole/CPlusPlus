/**
 * @file breadthTraversal.cpp
 * @author Braiden Gole
 * @brief This is the implementation of a breadth traversal.
 *  
 *  (Here are some input values to show how the program works.)
 *  [INPUT VALUES]:
 *      3 & 2 = {1, 4, 8, 9}
 *      1 & 2 = {3, 2, 6, 7}
 *      4 & 1 = {8}
 *      4 & 2 = {9}
 *      3 & 1 = {2, 6, 7}
 *      2 & 2 == {7}
 * 
 *  The display of the entire graph showGraph() was a function just for fun, use it if you
 *  like.
 * ----------------------------------------------------------------------------------------
 * (Learned what a breadth traversal is all about - (GeeksForGeeks))
 * [SOURCE/WEBSITE]: https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
 * ----------------------------------------------------------------------------------------
 * @version 0.1
 * @date 2021-02-24
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>
#include <vector>
#include <queue>
#include <list>

// Header files.
#include "bfsFunctions.h"

// Function prototypes.
void breadthTraversal(std::vector<int>* vStorage, std::vector<bool> visitedNodes, int searchKey, int leftRight);

int main()
{   
    std::vector<int>* graph = new std::vector<int>[TOTALNUMBEROFNODES];
    std::vector<bool> visited;
    
    if (graph __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return ERROR;
    }

    // Mark all spots with (false) to mark the position empty.
    visited = MarkSpotsNotVisited(visited, TOTALNUMBEROFNODES);

    // Get the starting node for the breadth traversal.
    unsigned int startingNode = ONE;
    std::cout << "Enter in a starting position: ";
    if (__NOT__(std::cin >> startingNode))
    {
        std::cerr << "\n\tNo characters allowed !\n";
        std::cin.clear();
        std::cin.ignore(ONEHUNDRED, '\n');
        return ONE;
    }
    // Check the range of the starting node.
    if (__NOT__((startingNode __LRGEQ__ ZERO) AND (startingNode __LSSEQ__ FOUR)))
    {
        std::cerr << "\n\tMust be in the range of [0-9] !\n";
        return ONE;
    }

    int leftOrRight = ZERO;
    std::cout << "1. Left\n";
    std::cout << "2. Right\n";
    std::cout << "\nWould you like the left or right node: ";
    if (__NOT__(std::cin >> leftOrRight))
    {
        std::cerr << "\n\tNo characters allowed !\n";
        std::cin.clear();
        std::cin.ignore(ONEHUNDRED, NEWLINE);
    }
    // Check the selection to see if it in range.
    if (__NOT__(leftOrRight __LRGEQ__ ONE AND leftOrRight __LSSEQ__ TWO))
    {
        std::cerr << "\n\tOut of range, selections are 1 or 2...";
        return ONE;
    }

    // Build the input graph to feed.
    graph[ZERO].push_back(5);
    graph[ONE].push_back(4);
    graph[ONE].push_back(3);
    graph[TWO].push_back(6);
    graph[TWO].push_back(7);
    graph[THREE].push_back(2);
    graph[THREE].push_back(1);
    graph[FOUR].push_back(8);
    graph[FOUR].push_back(9);

    breadthTraversal(graph, visited, startingNode, leftOrRight);
    
    // Adjust the variable based on the amount of levels you create, in this case it is 4.
    std::cout << "\n\n -- Complete Graph --\n";
    showGraph(graph, FOUR);

    delete[] graph;
    return ZERO;
}

/**     -- Function header comment
 *  Function        :   breadthTraversal
 *  Description     :   This function will traverse a graph in a breadthward motion
 *                      we use a built in C++ deque to work with this structure.
 *  Parameters      :   vStorage, visitedNodes, searchKey, leftRight
 *  Returns         :   None
 */
void breadthTraversal(std::vector<int>* vStorage, std::vector<bool> visitedNodes, int searchKey, int leftRight)
{   
    std::deque<int> feedInData;

    int value = ZERO;
    
    // Select on what level what number you would like on the selected level.
    // Its either the first node on that level or the second node.
    if (leftRight == ONE)
    {
        value = vStorage[searchKey].front();
        feedInData.push_back(value);
        visitedNodes[searchKey] = true;
    }
    else if (leftRight == TWO)
    {
        value = vStorage[searchKey].back();
        feedInData.push_back(value);
        visitedNodes[searchKey] = true;
    }

    std::cout << "\n -- Shortest Path --\n";
    std::vector<int>::iterator levels;
    do 
    {
        searchKey = feedInData.front();
        std::cout << searchKey << " ";
        feedInData.pop_front();

        for (levels = vStorage[searchKey].begin(); levels __NEQ__ vStorage[searchKey].end(); levels++)
        {   
            if (visitedNodes[*levels] __NEQ__ true)
            {   
                feedInData.push_back(*levels);
                visitedNodes[*levels] = true;
            }
        }
    } while ((feedInData.empty()) __EQ__ false);
}
