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
    struct akash *pt, *head, *neww;
    pt=(akash*)malloc(sizeof (akash));
    head=pt;

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
    while(pt->p!=NULL)
    {
        printf("%c-%d\n",pt->x,pt->y);
        pt=pt->p;
    }

    return 0;
}
