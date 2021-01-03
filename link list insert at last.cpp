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
    struct num *pt, *head, *neww ;
    pt=(num*)malloc(sizeof (num));
    head=pt;

    for(i=1; i<=10; i++)
    {
        pt->x=i;
        //printf("%d ",pt->x);

        if(i<10)
        {
            pt->p=(num*)malloc(sizeof (num));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    pt=head;
    while(pt->p!=NULL)
    {
        pt=pt->p;
    }

    neww=(num*)malloc(sizeof(num));
    neww->x=11;
    neww->p=NULL;
    pt->p=neww;

    while(pt->p!=NULL)
    {
        printf("%d ",pt->x);
        pt=pt->p;
    }
    return 0;
}
