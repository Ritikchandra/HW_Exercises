
#include"linked_list.h"
LIST createNewList(){
    LIST l;
    l = (LIST) malloc(sizeof(list));
    if(l==NULL){
        printf("List creation failed");
        return NULL;
    }
    else{
        l->count=0;
        l->head=NULL;
        return l;
    }

}
NODE createNewNode(process e){
    NODE n;
    n = (NODE) malloc(sizeof(node));
    if(!n){
        printf("Node Creation Failed");
        return NULL;
    }
    else{
    n->e=e;
    n->next=NULL;
    return n;
    }
}
void insertAtFirst(LIST l,NODE n){
    if(l->count == 0){
        l->head = n;
        l->count++;
        n->next = NULL;
    }
    else{   
     n->next = l->head;
    l->head = n;
    l->count++;
    }

}
void insertAtLast(LIST l, NODE n){
    if((l->count) == 0){
        l->head = n;
        n->next = NULL;
        (l->count)++;
}
else{
    NODE temp;
    temp = l->head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    l->count++;
}
}
void removeAtFirst(LIST l){
    if(l->count == 0){
        printf("List already empty");
    }
    else{
        NODE temp = l->head;
        l->head = l->head->next;
        l->count--;
        free(temp);
    }
}
void removeAtLast(LIST l){
        if(l->count == 0){
        printf("List already empty");
    }
    else{
        NODE temp = l->head;
        NODE prev;
        prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        l->count--;
    }
}