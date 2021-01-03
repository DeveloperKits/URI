#include<bits/stdc++.h>

struct Tesla
{
    char c_n;
    int x;
    int y;
    struct Tesla *p;
};

int main()
{
    struct Tesla *pt;
    pt=(Tesla*)malloc(sizeof(Tesla));

    for(i=0;i<10;i++)
    {
        pt->c_r=96+i;
        pt->x=i;
        pt->y=i+10;
        printf("%c-%d\n",pt->x,pt->y);
        if(i<10)
        {
            pt->p=(akash*)malloc(sizeof (akash));
            pt=pt->p;
        }
    }
    pt->p=NULL;
}
