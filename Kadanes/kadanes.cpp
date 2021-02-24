/**
 * @file kadanes.cpp
 * @author Braiden Gole
 * @brief This is a implementation of Kadanes algorithm.
 *        
 *        This algorithm involves finding the largest sum of the subarrays in
 *        a 1 dimensional array.
 * @version 0.1
 * @date 2021-02-24
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>

#define __LSS__ <
#define __LRGR__ >
#define ZERO 0
#define KADANESLIMIT 8

// Function prototypes.
const int kadanesAlgorithm(int array[], const int size);

int main()
{   
    int array[KADANESLIMIT] = { -5, -9, 3, 9, -2, 1, 3, 4 };
    const int maxSum = kadanesAlgorithm(array, KADANESLIMIT);
    std::cout << "Max Sum: " << maxSum;
    return ZERO;
}

/**     -- Function header comment
 *  Function        :   kadanesAlgorithm
 *  Description     :   This algorithm will find the number in a sub array
 *                      in which would generate the largest sum and that it returned.
 *  Parameters      :   array, size
 *  Returns         :   None
 */
const int kadanesAlgorithm(int array[], const int size)
{   
    int numberToCompare = ZERO;
    int currentMaximum = ZERO;
    int index = ZERO;
    do 
    {   
        // Add a number from the array to compare with the origin of 0.
        numberToCompare += array[index];

        // If the number is negative mark it with a 0.
        if (numberToCompare __LRGR__ currentMaximum)
        {
            currentMaximum = numberToCompare;
        }
        else
        {
            if (numberToCompare __LSS__ ZERO)
            {
                numberToCompare = ZERO;
            }
        }
        index++;
    } while (index __LSS__ size);
    return currentMaximum;
}