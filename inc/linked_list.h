#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int data;
    struct node* next;
}node_t;

static inline void add_node(int data);
static inline void delete_node(node_t* head);
static inline void search_node(node_t* head, int key);

#endif
