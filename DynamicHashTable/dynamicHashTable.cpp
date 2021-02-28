/**
 * @file dynamicHashTable.cpp
 * @author Braiden Gole
 * @brief This is a hash table.
 * [NOTE:] Do not try to enter in ALL capital names !
 * [NOTE:] Do not enter in names with a space !
 *
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>
#include <string>
#include <array>

// Header files.
#include "dynamicHashTable.h"

// Constructors / Desctructors.
HashNode::HashNode()
{
    ;;
}
HashNode::HashNode(std::string usersName)
{
    SetName(usersName);
}
HashNode::~HashNode()
{
    ;;
}
const std::string HashNode::GetName()
{
    return this->name;
}
void HashNode::SetName(std::string usersName)
{
    this->name = usersName;
}

// Constructors / Destructors.
HashTable::HashTable()
{
    ;;
}
HashTable::~HashTable()
{
    ;;
}
HashNode* HashTable::CreateEntry(HashNode** table, std::string usersName, const int size, const int index)
{    
    HashNode* newNode = new HashNode(usersName);
    
    if (newNode __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return NULL;
    }

    // When the entries are filled we have an if statement to filter out the empty enties.
    if (table[index] __EQ__ NULL)
    {   
        // Return the node which will be assigned to the proper index in main().
        return newNode;
    } 
    else
    {
        int start;
        for (start = index; (table[start] __NEQ__ NULL) AND (table[start]->GetName() __NEQ__ usersName); start++)
        {
            start %= size;
        }

        if (table[start] __EQ__ NULL)
        {
            table[start] = newNode;
        }
    }
    return newNode;
}
HashNode** HashTable::UpdateEntry(HashNode** table, std::string nameToUpdate, const int size)
{   
    HashNode* newNameNode = new HashNode();
    
    if (newNameNode __EQ__ nullptr)
    {
        std::cerr << "Out of memory !";
        return NULL;
    }

    // Does the name even exists ? Is the position filled ?
    std::string newName = "";
    unsigned int index = HashMethod(nameToUpdate, size);
    if (table[index] __NEQ__ NULL)
    {   
        table[index] = NULL;

        // Enter in the name to update.
        std::cout << "\n\t\tUpdate to: ";
        std::cin >> newName;

        unsigned int newIndex = HashMethod(newName, size);
        if (table[newIndex] __EQ__ NULL)
        {   
            newNameNode->SetName(newName);
            table[newIndex] = newNameNode;
            return table;
        }
        else
        {   
            int start;
            for (start = newIndex; (table[newIndex] __NEQ__ NULL) AND (table[newIndex]->GetName() __NEQ__ newName); start++)
            {
                start %= size;
            }

            // Check to ensure that we filter out all empty spots.
            if (table[newIndex] __EQ__ NULL)
            {   
                newNameNode->SetName(newName);
                table[newIndex] = newNameNode;
                return table;
            }
        }
    }
    return NULL;
}
HashNode** HashTable::DeleteEntry(HashNode** table, std::string nameOfUser, const int size)
{   
    int index = HashMethod(nameOfUser, size);
    if (table[index] __NEQ__ NULL)
    {
        table[index] = NULL;
        return table;
    }
    return NULL;
}
void HashTable::MarkUpHashTable(HashNode** table)
{
    for (int positions = ZERO; positions < FIXEDSIZE; positions++)
    {
        table[positions] = NULL;
    }
}
unsigned int HashTable::HashMethod(std::string usersName, const int currentSize)
{   
    long hashValue = 1;
    for (unsigned int letters = ZERO; letters < usersName.length(); letters++)
    {
        hashValue += usersName[letters];
        hashValue *= usersName[letters];
    }
    hashValue %= currentSize;
    return hashValue;
}
const int HashTable::GetSize()
{
    return this->size;
}
void HashTable::SetSize(int updatedSize)
{
    this->size = updatedSize;
}
