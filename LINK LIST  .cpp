#include<bits/stdc++.h>

struct node
{
    int data;
    struct node *p;
};

int main()
{
    int n,i;
    printf("Enter the no. of nodes to create list: ");
    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++)
    {
        printf("Enter node data for position %d in the list: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    struct node *pt,*head,*head2,*neww;
    pt=(node*)malloc(sizeof (node));
    head=pt;
    printf("List elements:\n");

    for(i=1;i<=n;i++)
    {
        pt->data=a[i];
        printf("%d ",pt->data);
        if(i<n)
        {
            pt->p=(node*)malloc(sizeof (node));
            pt=pt->p;
        }
    }
    pt->p=NULL;
    printf("\n\n");

    int F;
    printf("Insert the element at 1st position: ");
    scanf("%d",&F);
    printf("\n");

    pt=head;
    neww=(node*)malloc(sizeof (node));
    neww->data=F;
    neww->p=pt;
    head=neww;
    pt=head;

    printf("List elements:\n");
    while(pt!=NULL)
    {
        printf("%d ",pt->data);
        pt=pt->p;
    }
    printf("\n\n");

    int L;
    printf("Insert the element at last position: ");
    scanf("%d",&L);
    printf("\n");

    pt=head;
    while(pt->p!=NULL)
    {
        pt=pt->p;
    }
    neww=(node*)malloc(sizeof (node));
    neww->data=L;
    pt->p=neww;
    neww->p=NULL;
    pt=head;

    printf("List elements:\n");
    while(pt!=NULL)
    {
        printf("%d ",pt->data);
        pt=pt->p;
    }
    printf("\n\n");

    int Pa,value;   /* All the following are inserted at mid */
    printf("Insert the element at any position in the list \n");
    printf("Enter the position: ");
    scanf("%d",&Pa);
    printf("Enter the element value: ");
    scanf("%d",&value);
    printf("\n");

    pt=head;

    for(i=1;i<=n;i++)
    {
        if(i<Pa-1)
        {
            pt=pt->p;
        }
        if(i<Pa)
        {
           head2=pt->p;
        }
    }

    neww=(node*)malloc(sizeof (node));
    neww->data=value;
    neww->p=head2;
    pt->p=neww;
    pt=head;

    printf("List elements:\n");
    while(pt!=NULL)
    {
        printf("%d ",pt->data);
        pt=pt->p;
    }
    return 0;
}
