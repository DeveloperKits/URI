#include<bits/stdc++.h>
using namespace std;

struct Tesla
{
    char c_n;
    int x;
    struct Tesla *p;
};

int main()
{
    int i,l=0;

    struct Tesla *pt,*head,*head2,*neww;
    pt=(Tesla*)malloc(sizeof (Tesla));
    head=pt;
    head2=head;

    for(i=1; i<=26; i++)
    {
        pt->c_n=96+i;
        pt->x=i;
//printf("%c-%d\n",pt->c_n,pt->x);
        if(i<26)
        {
            pt->p=(Tesla*)malloc(sizeof (Tesla));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    pt=head;
    while(pt->p!=NULL)
    {
    pt=pt->p;
    }

    neww=(Tesla*)malloc(sizeof (Tesla));
    neww->c_n='O';
    neww->x=101;
    neww->p=NULL;
    pt->p=neww;

    pt=head;
    while(pt!=NULL)
    {
    printf("%c-%d\n",pt->c_n,pt->x);
    pt=pt->p;
    }
    return 0;
}

