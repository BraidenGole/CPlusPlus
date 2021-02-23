/**
 * @file dynamicHashTable.h
 * @author Braiden Gole
 * @brief This is a open addressed hash table.
 * [NOTE:] Do not try to enter in ALL capital names !
 * [NOTE:] Do not enter in names with a space !
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#ifndef _DYNAMICADDRESSEDHASHTABLE
#define _DYNAMICADDRESSEDHASHTABLE "openHashTable.h"

#define EXPANDAT 11
#define FIXEDSIZE 17
#define ZERO 0

#define __NEQ__ !=
#define __EQ__ ==
#define AND &&
#define ADD +

class HashNode 
{
    private:
        std::string name;

    public:

        // Constructor.
        HashNode();
        HashNode(std::string name);

        // Destructor.
        ~HashNode();

        // Accessors.
        const std::string GetName();

        // Mutators.
        void SetName(std::string name);
};

class HashTable
{
    private:
        int size;

    public:

        // Constructor.
        HashTable();

        // Destructor.
        ~HashTable();

        // Accessors.
        const int GetSize();

        // Mutators
        void SetSize(int size);

        // Methods.
        HashNode* CreateEntry(HashNode** table, std::string nameOfUser, const int size, const int index);
        HashNode** UpdateEntry(HashNode** table, std::string nameOfUser, const int size);
        HashNode** DeleteEntry(HashNode** table, std::string nameOfUser, const int size);
        void MarkUpHashTable(HashNode** table);
        unsigned int HashMethod(std::string name, const int currentSize);
};
#endif