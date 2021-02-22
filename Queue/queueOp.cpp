/**
 * @file queueOp.cpp
 * @author Braiden Gole
 * @brief This is where all of our Queue methods will go.
 * @version 0.1
 * @date 2021-02-22
 * @copyright Copyright (c) Braiden Gole 2021
 */
#include <iostream>

// Header files.
#include "queueOp.h"

// Constructors / Destructors.
Queue::Queue() 
{
    std::cout << "Creating Space !\n";
}
Queue::Queue(unsigned int sizeOfQueue)
{
    this->size = sizeOfQueue;
    std::cout << "\nInitialized size: " << sizeOfQueue << std::endl;

    this->data = 0;
    this->front = 0;
    this->rear = -1;
}
Queue::~Queue() 
{
    ;;
}

// Accessors.
const int Queue::GetFront() 
{
    return this->front;
}
const int Queue::GetRear()
{
    return this->rear;
}
const int Queue::GetPeek(Queue* queue)
{
    if (queue[queue->front].data == -1)
    {
        return -1;
    }
    const int peekOfQueue = queue[queue->front].data;
    return peekOfQueue;
}
const int Queue::GetInitSize()
{
    return this->size;
}
const int Queue::GetData()
{
    return this->data;
}

// Mutators.
void Queue::SetFront(int qFront)
{
    this->front = front;
}
void Queue::SetRear(int qRear)
{
    this->rear = qRear;
}

// General Methods.
Queue* Queue::EnQueue(Queue* queue, int value)
{
    if ((IsFilled(queue)) == true)
    {   
        return NULL;
    }
    else
    {   
        // Make sure we do not overfill the table by always
        // keeping the index in range of [0 - n].
        ++queue->rear;
        queue[queue->rear].data = value;
    }
    return queue;
}
Queue* Queue::DeQueue(Queue* queue)
{
    if ((IsEmpty(queue)) == false)
    {   
        queue[queue->front].data = 0;
        ++queue->front;
        --queue->currentSize;
        return queue;
    }
    return NULL;
}

// Extra methods.
const bool Queue::IsEmpty(Queue* queue)
{
    if (queue->front == queue->rear)
    {   
        return true;
    }
    return false;
}
const bool Queue::IsFilled(Queue* queue)
{   
    int initializedSize = queue->GetInitSize();
    if (queue->rear == initializedSize)
    {   
        return true;
    }
    return false;
}