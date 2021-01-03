#include<bits/stdc++.h>
using namespace std;

struct num
{
    int x;
    struct num *p;
};

int main()
{
    int i;
    struct num *pt, *head, *head2, *neww ;
    pt=(num*)malloc(sizeof (num));
    head=pt;
    head2=head;

    for(i=1; i<=10; i++)
    {
        pt->x=i;
        //printf("%d ",pt->x)

        pt->p=(num*)malloc(sizeof (num));
        pt=pt->p;
    }

    pt->p=NULL;

    pt=head;
    for(i=1; i<=10; i++)
    {
        if(i<5)
        {
            pt=pt->p;
        }
        if(i<6)
        {
            head2=pt->p;
        }
    }
    neww=(num*)malloc(sizeof(num));
    neww->x=100;
    neww->p=head2;
    pt->p=neww;
    pt=head;

    while(pt->p!=NULL)
    {
        printf("%d ",pt->x);
        pt=pt->p;
    }
    pt->p=NULL;

    return 0;
}

