#include "linked_list.h"
#include "queue.h"
QUEUE createQueue(){
    QUEUE q;
    q = (QUEUE) malloc(sizeof(queue));
    if(!q){
        printf("Queue Creation Failed! ");
        return NULL;
    }
    else{
        q->front = 0;
        q->rear = 0;
        q->l = createNewList();
        q->size = 0;
        return q;
    }
}
    bool enqueue(QUEUE q, NODE n){
        if(q->size == QUEUE_SIZE){
            printf("Queue is Full! ");
            return false;
        }
        else{
        insertAtLast(q->l, n);
        q->size++;
        q->rear = (q->rear + 1);
        return true;
    }
    }
    bool dequeue(QUEUE q){
        if(q->size == 0){
            printf("Queue is empty! ");
            return false;
        }
        else{
            removeAtFirst(q->l);
            q->front = (q->front + 1);
            q->size--;
            return true;
        }
    }
    bool isEmpty(QUEUE q){
        return (q->size == 0);
    }
    int size(QUEUE q){
        return q->size;
    }
    NODE front (QUEUE q){
        return (q->l->head);
    }