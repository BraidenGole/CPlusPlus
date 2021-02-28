/**
 * @file dynamicHash.cpp
 * @author Braiden Gole
 * @brief This is a hash table.
 * [NOTE:] Do not try to enter in ALL capital names !
 * [NOTE:] Do not enter in names with a space !
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>
#include <string>

// Header files.
#include "dynamicHashTable.h"

// Function prototypes.
void displaySingleEntry(HashNode** table, std::string userName);

int main()
{   
    HashNode** table = new HashNode*[FIXEDSIZE];
    HashTable* operation = new HashTable();
    
    if (table __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return ERROR;
    }

    if (operation __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return ERROR;
    }

    // Prepare the hash table for entries.
    operation->MarkUpHashTable(table);

    std::string usersName = "";
    std::string selection = "";
    std::string nameToView = "";
    std::string updateName = "";
    std::string deleteName = "";

    int timesWhat = 1;
    int oldSize = ZERO;
    int newSize = ZERO;
    unsigned int index = ZERO;
    int numberOfEntries = ZERO;

    // Set the size initially to a prime number larger than 10.
    operation->SetSize(FIXEDSIZE);

    bool keepFilling = true;
    while (keepFilling)
    {   
        std::cout << "  -- Menu --\n";
        std::cout << "\ta. Create.\n";
        std::cout << "\tb. Update.\n";
        std::cout << "\tc. Delete.\n";
        std::cout << "\td. Show Single.\n";
        std::cout << "\te. Quit.\n\n";
        std::cout << "\tEnter a letter: ";
        std::cin >> selection;

        if ((selection.compare("e")) __EQ__ ZERO)
        {
            break;
        }
        else if ((selection.compare("a")) __EQ__ ZERO)
        {   
            std::cout << "\n\tEnter in a name: ";
            std::cin >> usersName;
            
            index = operation->HashMethod(usersName, operation->GetSize());
            table[index] = operation->CreateEntry(table, usersName, operation->GetSize(), index);
            ++numberOfEntries;
        }
        else if ((selection.compare("b")) __EQ__ ZERO)
        {   
            std::cout << "\n\tEnter in the name to update: ";
            std::cin >> updateName;

            // Return the table as a updated whole.
            table = operation->UpdateEntry(table, updateName, operation->GetSize());
        }
        else if ((selection.compare("c")) __EQ__ ZERO)
        {   
            std::cout << "\n\tEnter in the name to delete: ";
            std::cin >> deleteName;

            // Return the table as a whole with the deleted node.
            table = operation->DeleteEntry(table, deleteName, operation->GetSize());
        }
        else if ((selection.compare("d")) __EQ__ ZERO)
        {   
            std::cout << "\n\tEnter in a name to view: ";
            std::cin >> nameToView;
            displaySingleEntry(table, nameToView);
        }
        else
        {
            std::cout << "\n\t\tNot a valid option !\n\n";
        }

        // Do not overfill the hash table.
        if (numberOfEntries == EXPANDAT)
        {   
            std::cout << "\n\t\t------------------ Expanded ------------------\n\n";

            oldSize = FIXEDSIZE * timesWhat;
            ++timesWhat;
            newSize = FIXEDSIZE * timesWhat;

            operation->SetSize(newSize);
            
            // Expand the indices of the table starting from the end index of the previous expansion.
            for (int currEndSize = oldSize; currEndSize <= operation->GetSize(); ++currEndSize)
            {
                table[currEndSize] = NULL;
            }
            numberOfEntries = ZERO;
        }
    }

    delete operation;
    delete[] table;
    return 0;
}

/**     -- Function header comment
 *  Function        :   displaySingleEntry
 *  Description     :   This function will display the entries in the hash
 *                      table to the console window.
 *  Parameters      :   table
 *  Returns         :   None
 */
void displaySingleEntry(HashNode** table, std::string userName)
{   
    HashTable* tableOp = new HashTable();
    std::cout << "\n\t\tSingle Entry: ";

    unsigned int index = tableOp->HashMethod(userName, FIXEDSIZE);
    if (table[index] __NEQ__ NULL)
    {
        std::cout << table[index]->GetName() << "\n";
    }
    else
    {
        std::cout << "NONE";
    }
    std::cout << "\n";
}
