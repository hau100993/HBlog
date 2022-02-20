#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
  int data;
  // struct Node* pre_node;
  struct Node *next_node;
} t_Node;



static t_Node *data_list = NULL;

/* push to head */
void pushNode(t_Node ** head, int data)
{
  // create a new node to store data; 
  t_Node *newNode = (t_Node *) malloc (sizeof(t_Node));
  memset (newNode, 0, sizeof (t_Node));
  printf("push %d\n", data);
  newNode->data = data;
  newNode->next_node = NULL;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    newNode->next_node = *head;
    *head =  newNode;
}

/* append to tail */
void append(t_Node ** head, int data)
{
    // create a new node to store data; 
    t_Node *newNode = (t_Node *) malloc (sizeof (t_Node));
    memset (newNode, 0, sizeof (t_Node));
    
    printf("append %d\n", data);
    newNode->data = data;
    newNode->next_node = NULL;
    
    t_Node* current = *head; 
    if(current == NULL)
    {
        *head = newNode;
        return;
    }
    
    
    while(current->next_node != NULL)
        current = current->next_node;
    
    current->next_node = newNode;
}


void printfNode(t_Node** head)
{
    t_Node* current = *head;
    while(current!= NULL)
    {
        printf(" %d", current->data);
        current = current->next_node;
    }
    
}

/* insert after a specific node */
/* push to head */

void
test_link_list ()
{
    printf("Test link list \n");
    append(&data_list, 1 );
    append(&data_list, 2 );
    append(&data_list, 3 );
    append(&data_list, 4 );
    pushNode(&data_list, 8 );
    pushNode(&data_list, 9 );
    pushNode(&data_list, 10 );
    printfNode(&data_list);
    
}
int
main ()
{
}
