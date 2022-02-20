#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Queue: 

- define: rear (back) of queue, front of queue, current_queue_size, queue_capacity (for case using array)
- operator 
    + isEmpty() // if current_queue_size == 0
    + isFull()  // if current_queue_size = queue_capacity;
    + enQueue(int data)  // push data to rear_queue (if not isFull)
    + int dequeuee()  // pop data at front_queue (if not isEmpty)

// node1(head)->node2-> node3->node4->node5->node6->NULL
      |                                 |
    head                              rear   

      node1->node2->node3->NULL
      |             |
    head,          rear   

*/

typedef struct Node {
    int data;
    struct Node* pnext;
} s_node_t;

static s_node_t* rear = NULL;

s_node_t* dequeue(s_node_t** head)
{
    if(!*head)
    {
        printf("Qeueu is empty !\n\n");
        return NULL;
    }

    //get the node at head: 
    s_node_t* p_node = *head;

    //shift head to the next node; 
    *head=(*head)->pnext;
    
    return p_node;
}

void enqueue(s_node_t** head, int data)
{
    printf("Insert job id %u to queue\n", data);
    //create a new node: 
    s_node_t* new_node = (s_node_t*)calloc(1, sizeof(s_node_t));
    new_node->data= data;
    new_node->pnext= NULL;
    
    //head is null. add new_node as head
    if(!*head)
    {
        printf("Head is poin to NULL. Insert job id head\n", data);
        *head = new_node;
        //add rear to new_node; 
        rear = new_node;
        return;
    }
    
    //queue is is not empty. Add new_node to the end of queue. 
    rear->pnext = new_node;
    
    //change rear to point to the last one. 
    rear = new_node;
}

void job_queue_handle(s_node_t* job)
{
    if(!job)
    {
        printf("Job queue is empty. Return error\n");
        return;
    }
    printf("Job queue id: %d\n", job->data);
    free(job);
}


void test_queue()
{
    printf("Test Queue Implementation\n");
    //allocate head;
    s_node_t* head = NULL;

    enqueue(&head, 1);
    enqueue(&head, 2);
    enqueue(&head, 3);
    enqueue(&head, 4);
    enqueue(&head, 5);
    
    job_queue_handle(dequeue(&head));
    job_queue_handle(dequeue(&head));
    job_queue_handle(dequeue(&head));
    job_queue_handle(dequeue(&head));
    job_queue_handle(dequeue(&head));
    job_queue_handle(dequeue(&head));
    
}


int main ()
{
    test_queue();

    return 0;
}
