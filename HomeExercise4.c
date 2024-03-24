#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"
int main()
{
    int size;
    FILE *fptr;
   PROCESS p;
    fptr = fopen("fcfs_input.txt", "r");
    fscanf(fptr, "%d\n", &size);
    p = (PROCESS) malloc(size*sizeof(process));
    for (int i = 0; i < size; i++)
    {
        fscanf(fptr, "%d %d %d\n", &p[i].pid, &p[i].arrival_time, &p[i].burst_time);
    }
    QUEUE q = createQueue();
    int i = 0;
    NODE n = createNewNode(p[0]);
    enqueue(q, n);
    while(q->size != 0){
        for(int j = 0; j < size; j++){
            if(p[j].arrival_time == i){
                NODE n = createNewNode(p[j]);
                enqueue(q, n);
            }
        }
        for (int j = q->size; j < size - q->size; j++)
        {
            
        }
        
        i++;
    }
    
    fclose(fptr);
    return 0;
}
