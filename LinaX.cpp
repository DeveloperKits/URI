/* This project created by team LinaX.
   This project are helpful for user.
   Here the user can insert any number from last & delete any number from any position.
*/
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

    free(temp->next); // Free memory

    temp->next = next; // Unlink the deleted node from list
}

//for print our program
void display(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next; //link one node to another node
    }
}


int main()
{
    puts("/*\nThis project created by team LinaX.\n\nName: Akash Das                 ID:192-15-13307\nName: Shapla Rani               ID:192-15-13201\nName: Hafizul Rahman Sumon      ID:192-15-13287\n\nThis project are helpful for user.\nHere the user can insert any number from last & delete any number from any position.\n*/");
    printf("\n");

    /* Start with the empty list */
    struct Node* head = NULL;

    /* call push function for insert number */
    int x,y,z;
    puts("Enter the number for create node:");
    scanf("%d",&x);
    puts("Enter the number of data you want to store:");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&y);
        push(&head, y);
    }


    printf("Created Linked List: \n");
    display(head); //call display function for print
    printf("\n");

    while(1)
    {
        puts("Enter the position of a number you want to delete:");
        scanf("%d",&z);
        if(z>0)
        {
            pop(&head, z-1); //call pop function for delete number
            printf("\nLinked List after Deletion at position %d: \n",z);
            display(head);
            printf("\n");
        }
        else
        {
            break;
        }
    }


    return 0;
}
