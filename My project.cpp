/* This project created by team LinaX. */
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));//create a node
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}


void pop(struct Node **head_ref, int position)
{
    if (*head_ref == NULL)
    {
        return;
    }

    struct Node* temp = *head_ref;

    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // delete a node
        return;
    }

    for (int i=0; temp!=NULL && i<position-1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    struct Node *next = temp->next->next;

    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
}

//for print our program
void display(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;//link one node to another node
    }
}


int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* call push function for insert number */
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    printf("Created Linked List: \n");
    display(head);//call display function for print
    printf("\n");

    pop(&head, 3);//call pop function for delete number
    printf("\nLinked List after Deletion at position 3: \n");
    display(head);
    printf("\n");

    return 0;
}
