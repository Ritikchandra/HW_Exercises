#ifndef QUEUE_H
#define QUEUE_H
    #include <stdbool.h>
    #include "linked_list.h"
    QUEUE createQueue();
    bool enqueue(QUEUE q, NODE n);
    bool dequeue(QUEUE q);
    bool isEmpty(QUEUE q);
    int size(QUEUE q);
    NODE front(QUEUE q);
#endif