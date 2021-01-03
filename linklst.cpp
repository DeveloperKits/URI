#include<bits/stdc++.h>
int n;
using namespace std;

struct Node
{
    int data;
    struct Node *link;

};
struct Node *ptr;

void push(int data)
{
    struct Node *temp;
    temp=new Node();
    temp->data=data;
    temp->link=ptr;
    ptr=temp;
}

void pop()
{
    struct Node *temp;
    if(ptr==NULL)
    {
        printf("No value found for pop.\n");
    }
    else
    {
        temp = ptr;
        ptr = ptr->link;
        free(temp);
    }
}

void display()
{
    if(ptr==NULL)
    {
        printf("There is no value for print");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr= ptr->link;
        }
    }

}
int main()
{
    scanf("%d",&n);
    int a,i;
    for(i=0; i<n; i++)
    {
        push(scanf("%d",&a));
    }
//   push(100);
//   pop();
//   push(50);
//    push(60);
//    push(70);
//     pop();
    display();
    return 0;
}
