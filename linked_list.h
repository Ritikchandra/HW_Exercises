#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H
#include"definitions.h"

LIST createNewList();
void insertAtFirst(LIST l,NODE n);
void insertAtLast(LIST l, NODE n);
void removeAtFirst(LIST l);
void removeAtLast(LIST l);
NODE createNewNode(process e);
#endif