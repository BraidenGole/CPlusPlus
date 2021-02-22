/**
 * @file queueOp.h
 * @author Braiden Gole
 * @brief This is where we will store our Queue class.
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#ifndef _QUEUEOP
#define _QUEUEOP "queueOp.h"

#define SIZEOFQUEUE 7

/**     -- Class header comment
 *  Name        :   Queue
 *  Purpose     :   This class is created to hold methods that will provide
 *                  access to the structures operations.
 */
class Queue {

    private:
        
        int front;
        int rear;
        int peek;
        int size;

    public:
        
        int data;
        int currentSize;

        // Constructor.
        Queue();
        Queue(unsigned int size);

        // Destructor.
        ~Queue();

        // Accessors.
        const int GetFront();
        const int GetRear();
        const int GetPeek(Queue* queue); // Special Get Method.
        const int GetData();
        const int GetInitSize();
        
        // Mutators.
        void SetFront(int front);
        void SetRear(int rear);

        // General Methods.
        Queue* EnQueue(Queue* queue, int data);
        Queue* DeQueue(Queue* queue);

        // Extra Methods.
        const bool IsEmpty(Queue* queue);
        const bool IsFilled(Queue* queue);
};
#endif