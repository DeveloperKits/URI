#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
struct akash
{
    char x[3];
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
        pt->x[0]='A';
        pt->x[1]='A';
        pt->x[2]='A';
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
    neww->x[0]='A';
        neww->x[1]='A';
        neww->x[2]='A';
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
    neww->x[0]='A';
        neww->x[1]='A';
        neww->x[2]='A';
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
    neww->x[0]='A';
        neww->x[1]='A';
        neww->x[2]='A';
    neww->y=30;
    neww->p=head2;
    pt->p=neww;
    pt=head;

    while(pt!=NULL)
    {
        printf("%s-%d\n",pt->x,pt->y);
        pt=pt->p;
    }

    return 0;
}

