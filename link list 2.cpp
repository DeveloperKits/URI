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
    struct akash *pt;
    pt=(akash*)malloc(sizeof(akash));

    for(i=1; i<27; i++)
    {
        pt->x=96+i;
        pt->y=i;
        printf("%c, %d\n",pt->x,pt->y);
        if(i<26)
        {
        pt->p=(akash*)
            malloc(sizeof (akash));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    return 0;
}
