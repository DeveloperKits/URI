#include<bits/stdc++.h>
using namespace std;

int i;

struct node
{
    int x;
    struct node *p;
};
struct node *pt,*head,*head2;


void push(int data)
{
    struct node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->x=data;
    temp->p=head2;//left & right are connected this equ...
    pt->p=temp;
    pt=head;
}


void pop(int P,int N)
{
    struct node *temp;

    for(i=1;i<=N;i++)
    {
        if(i<=N)
        {
            temp=pt->p;
            pt->p=head2;//which position user selected...there left & right are connect by this equ.
            free(temp);//delete selected position...
            pt=head;
        }
    }
}


int main()
{
    int n;
    printf("Enter the no. of nodes to create list: ");
    scanf("%d",&n);
    int a[n];

    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("Enter node data for position %d in the list: ",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    head=pt;
    head2=head;
    pt->p=(node*)malloc(sizeof(node));

    printf("List elements:\n");
    for(i=1; i<=n; i++)
    {
        pt->x=a[i];
        printf("%d ",pt->x);

        if(i<n)
        {
            pt->p=(node*)malloc(sizeof(node));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    /* it's for push */

    int X;
    printf("How time you want to push number: ");
    scanf("%d",&X);
    int b[X];
    printf("\n");

    for(i=1; i<=X; i++)
    {
        printf("Data no %d: ",i);
        scanf("%d",&b[i]);

    }

    /* we want to push a number in middle....that why i did below this code */

    int div;//division
    for(i=1; i<=X; i++)
    {
        pt=head;

        if(n%2==0)
        {
            div=(n/2);
        }
        else
        {
            n++;
            div=(n/2);
            n--;
        }

        for(i=1; i<=n; i++)
        {
            if(i<div)
            {
                pt=pt->p;
            }
            if(i<div+1)
            {
                head2=pt->p;
            }
        }

        push(b[i]);//call pop function
        n++;

    }

    /* it's for pop */

    int y;
    printf("How time you want to pop number: ");
    scanf("%d",&y);
    int c[y];
    printf("\n");

    for(i=1; i<=y; i++)
    {
        printf("Data no %d: ",i);
        scanf("%d",&c[i]);
    }

    /* we want to pop a number in any position....that why i did below this code */


    int position;
    for(i=1; i<=y; i++)
    {
        pt=head;

        printf("Which position you want to pop a number: ");
        scanf("%d",&position);

        for(i=1; i<=n; i++)
        {
            if(i<position)
            {
                pt=pt->p;
            }
            if(i<position+1)
            {
                head2=pt->p;
            }
        }
        pt=head;

        pop(position,n);//call pop function
        n--;

    }
    pt=head;


    while(pt!=NULL)
    {
        printf("%d ",pt->x);//print whole project
        pt=pt->p;
    }


    return 0;

}
