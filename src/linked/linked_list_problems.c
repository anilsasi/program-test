#include <linked_list.h>

node_t* head = NULL;
node_t* temp = NULL;

static inline
void add_node(int data)
{
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
delete_node_at_specific_position(node_t* head, int data)
{

}
int main()
{
    int i = 0;
    for (i = 10; i < 100; i = i+10)
    {
        add_node(i);
        printf("%d->", temp->data);
    }
    printf("\n");
    search_node(head, 70);
    delete_node(head);
    printf("%d\n", head->data);
    return 0;
}
