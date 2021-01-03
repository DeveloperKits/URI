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
    struct akash *pt, *first, *last, *other;
    pt=(akash*)malloc(sizeof (akash));
    first=pt;

    for(i=1; i<27; i++)
    {
        pt->x=96+i;
        pt->y=i;
        //printf("%c, %d\n",pt->x,pt->y);


        if(i<26)
        {
            pt->p=(akash*)malloc(sizeof (akash));
            pt=pt->p;

        }
    }
    pt->p=NULL;

    last=(akash*)malloc(sizeof (akash));
    last->x='h';
    last->y=10;


    pt=first;
    last->p=pt;
    first=last;
    pt=first;

    while(pt->p!=NULL)
    {
        //printf("%c, %d\n",pt->x,pt->y);
        pt=pt->p;
    }

    other=(akash*)malloc(sizeof (akash));
    other->x='v';
    other->y=285;
    other->p=NULL;
    pt->p=other;

    pt=first;

    while(pt!=NULL)
    {
        printf("%c, %d\n",pt->x,pt->y);
        pt=pt->p;
    }

    return 0;
}
