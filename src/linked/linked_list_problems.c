#include <linked_list.h>

node_t* head = NULL;

static inline
void add_node(int data)
{

  node_t* temp = head;
  node_t* new_node = (node_t*)malloc(sizeof(node_t));
  new_node->data = data;
  new_node->next =NULL;
  if (head == NULL)
  {
    head = new_node;
    temp = head;
  }
  else
  {
    while (temp->next != NULL) {
        temp = temp->next;
    }
  temp->next = new_node;
  temp = new_node;
}
  return;
}

static inline void delete_node(struct node* head)
{
  struct node* node_to_be_deleted = NULL;
  while (head != NULL) {
    node_to_be_deleted = head;
    head = head->next;
    free(node_to_be_deleted);
  }
}

static inline
void search_node(node_t* head, int data)
{
  node_t* temp = NULL;
  temp = head;
  int position = 1;
  while(temp->data != data)
  {
    temp = temp->next;
    position++;
  }
  printf("%d node found at position %d\n", temp->data, position);
}

void
delete_node_at_specific_position(node_t* head, int position)
{
    node_t* temp = head;
    node_t* previous = NULL;
    int i = 0;
    while(temp->next != NULL && i != position)
    {
        i++;
        previous = temp;
        temp = temp->next;
    }
    
    previous->next = temp->next;
    free(temp);

}

int display_linked_list()
{
    node_t* temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}

void inser_at_particular_position(int position, int data)
{
    node_t* traverse = head;
    int count = 0;
    while(traverse->next != NULL & count != position)
    {
        traverse = traverse->next;
    }
    
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    if (traverse == NULL)
    {
        traverse = new_node;
    }
    else
    {
        new_node->next = traverse->next;
        traverse->next = new_node;
    }
}

int main()
{
    int i = 0;
    for (i = 10; i < 100; i = i+10)
    {
        add_node(i);
    }
    printf("list is:", display_linked_list());
    printf("\n");
    //search_node(head, 70);
    //delete_node_at_specific_position(head, 3);
    //delete_node(head);
    inser_at_particular_position(4, 32);
    printf("after inserting:", display_linked_list());
    printf("\n");
    return 0;
}
