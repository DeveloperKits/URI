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
    struct akash *pt, *first, *last;
    pt=(akash*)malloc(sizeof(akash));
    first=pt;

    for(i=1;i<27;i++)
    {
        pt->x=96+i;
        pt->y=i;
        //printf("%c, %d\n",pt->x,pt->y);

        pt->p=(akash*)malloc(sizeof (akash));
        pt=pt->p;
    }
    pt->p=NULL;

    last=(akash*)malloc(sizeof(akash));
    last->x='h';
    last->y=10;
    pt=first;
    last->p=pt;
    pt=last;

    while(pt!=NULL)
    {
        printf("%c, %d\n",pt->x,pt->y);
        pt=pt->p;
    }

    return 0;
}
