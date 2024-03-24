#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define QUEUE_SIZE 10
typedef struct process{
    int pid;
    int arrival_time;
    int burst_time;
}process;
typedef struct process *PROCESS;
typedef struct node node;
typedef struct node *NODE;
typedef struct node{
    process e;
    NODE next;
}node;
typedef struct list{
    int count;
    NODE head;
}list;
typedef struct list *LIST;
typedef struct queue{
    int size;
    int front;
    int rear;
    LIST l;
}queue;
typedef struct queue *QUEUE;