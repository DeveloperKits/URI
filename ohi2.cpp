#include <bits/stdc++.h>

struct akash
{
    char x;
    int y;
    struct akash *p;
};

int main()
{
    int i;
    struct akash *pt, *head, *head2, *neww;
    pt=(akash*)malloc(sizeof (akash));
    head=pt;
    head2=head;

    for(i=1; i<=10; i++)
    {
        pt->x=96+i;
        pt->y=i;
        //printf("%c-%d\n",pt->x,pt->y);
        if(i<10)
        {
            pt->p=(akash*)malloc(sizeof (akash));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    pt=head;
    while(pt->p!=NULL)
    {
        pt=pt->p;
    }

    neww=(akash*)malloc(sizeof (akash));
    neww->x='L';
    neww->y=35;
    neww->p=NULL;
    pt->p=neww;

    pt=head;
    while(pt!=NULL)
    {
        //printf("%c-%d\n",pt->x,pt->y);
        pt=pt->p;
    }

    pt=head;

    neww=(akash*)malloc(sizeof (akash));
    neww->x='h';
    neww->y=34;
    neww->p=pt;
    head=neww;

    pt=head;
    while(pt!=NULL)
    {
        //printf("%c-%d\n",pt->x,pt->y);
        pt=pt->p;
    }

    pt=head;

    for(i=1;i<=10;i++)
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
    neww=(akash*)malloc(sizeof (akash));
    neww->x='g';
    neww->y=30;
    neww->p=head2;
    pt->p=neww;
    pt=head;

    while(pt!=NULL)
    {
        printf("%c-%d\n",pt->x,pt->y);
        pt=pt->p;
    }

    return 0;
}
