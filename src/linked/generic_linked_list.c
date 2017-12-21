#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    void* data;
    struct node *next;
}node_t;

node_t* head = NULL;

void add_to_list(void* data, int data_size)
{
    int i =0;
    node_t* temp = head;
    node_t* newnode = (node_t*)malloc(sizeof(node_t));
    for (i=0; i < data_size; i++)
    {
        *(char*)(newnode->data + i) = *(char*)(data + i);
    }
    newnode->next = head;
    head = newnode;
}

void print_list(void (*funp)(void*))
{
    node_t* temp = head;
    while (temp != NULL)
    {
        (*funp)(temp->data);
        temp=temp->next;
    }
}

void print_int(void* n)
{
    printf("%d->", *(int*)n);
}

void print_float(void* n)
{
    printf("%f->", *(float*)n);
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50}, i;
    for (i=4; i>=0; i--)
    {
       add_to_list( &arr[i], sizeof(int));
    }
    print_list(print_int);
}
