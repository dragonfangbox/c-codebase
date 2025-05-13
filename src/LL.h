#pragma once
#include <stdio.h>
#include "Types.h"

typedef struct node {
	void* value;
	struct node* next;
} node;

typedef struct linkedList {
	node* head;
} linkedList;

void initLL(linkedList* LinkedList, void* value);

void insertLL(linkedList* LinkedList, int index, void* value);
void removeLL(linkedList* linkedList, int index);
void appendLL(linkedList* linkedList, void* value);
void prependLL(linkedList* linkedList, void* value);

void destroyLL(linkedList* linkedList);

void printLL(linkedList* linkedList); 
