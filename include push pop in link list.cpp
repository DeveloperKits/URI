#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node *p;
};
struct Node *pt;

void push(int value)
{
    struct Node *temp;
    temp=new Node();
    //temp->data=value;
    temp->p=pt;
    pt=temp;
    pt->data=value;
}
void print()
{
    while(pt!=NULL)
    {
        printf("%d ",pt->data);
        pt=pt->p;
    }
}
void pop()
{
    struct Node *temp;
    if(pt==NULL)
    {
        printf("There is no value for pop.\n");
    }
    else
    {
        pt=temp;
        pt=pt->p;
        free(temp);
    }
}
int main()
{
    push(11);
    push(12);
    pop();
    push(13);
    print();
}
