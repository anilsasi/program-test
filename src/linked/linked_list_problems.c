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

void reverse_linked_list()
{
    node_t* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
    }
}

bool search_element_recursively(node_t* head, int element)
{
    if (head == NULL)
    {
        return false;
    }
    if(head->data == element)
    {
        printf("True\n");
        return true;
    }

    return search_element_recursively(head->next, element);
}

int length_recursive(node_t* head)
{
    if (head == NULL)
    {
        return 0;
    }

    return 1 + length_recursive(head->next);
}

void swap_nodes(int data1, int data2)
{
    node_t* node1 = head;
    node_t* node2 = head;
    node_t* prev1 = NULL;
    node_t* prev2 = NULL;
    
    if (data1 == data2)
    {
        return;
    }

    while(node1->data != data1)
    {
        prev1 = node1;
        node1 = node1->next;
    }
    while(node2->data != data2)
    {
        prev2 = node2;
        node2 = node2->next;
    }

    if (node1 == NULL || node2 == NULL)
    {
        return;
    }

    if (prev1 == NULL)
    {
        head = node2; 
    }
    else{
        prev1->next = node2;
    }
    if (prev2 == NULL)
    {
        head = node1;
    }
    else
    {
        prev2->next = node1;
    }

    node_t* temp = node2->next;
    node2->next = node1->next;
    node1->next = temp;
    return;

}

void middle_of_list()
{
    node_t* fast_ptr = head;
    node_t* slow_ptr = head;
    if (head != NULL)
    {
        while(fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
    }
    printf("middle of node is:%d", slow_ptr->data);
}


/*int main()
{
    int i = 0;
    for (i = 10; i < 100; i = i+10)
    {
        add_node(i);
    }
    printf("list is:", display_linked_list());
    //search_node(head, 70);
    //delete_node_at_specific_position(head, 3);
    //delete_node(head);
    //inser_at_particular_position(4, 32);
    //search_element_recursively(head, 20);
    //printf("after inserting:", display_linked_list());
    //swap_nodes(10, 30);
    //printf("lenght of list is:%d", length_recursive(head));
    //printf("\n");
    //swap_nodes(10, 30);
    //printf("list after swap:", display_linked_list());
    middle_of_list();
    printf("\n");
    return 0;
}*/
