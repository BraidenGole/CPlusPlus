/**
 * @file bfsFunctions.h
 * @author Braiden Gole
 * @brief This is a breadth traversal.
 * @version 0.1
 * @date 2021-02-24
 * @copyright Copyright (c) Braiden Gole 2021
 */
#ifndef BFSFUNCTIONS
#define BFSFUNCTIONS "bfsFunctions.h"

#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define ONEHUNDRED 100
#define TOTALNUMBEROFNODES 9

#define __NOT__ !
#define __NEQ__ !=
#define __EQ__ ==
#define __LRGEQ__ >=
#define __LSSEQ__ <=
#define AND &&
#define OR ||
#define NEWLINE '\n'

// Function prototypes.
std::vector<bool> MarkSpotsNotVisited(std::vector<bool> visitedNodes, const int numOfNodes);
void showGraph(std::vector<int>* storage, const int levels);
#endif