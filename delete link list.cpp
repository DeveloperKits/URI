#include<bits/stdc++.h>

struct Tesla
{
    char c_n;
    int x;
    struct Tesla *p;
};

int main()
{
    int i;

    struct Tesla *pt,*head,*head2;
    pt=(Tesla*)malloc(sizeof (Tesla));
    head=pt;
    head2=head;

    for(i=1; i<=26; i++)
    {
        pt->c_n=96+i;
        pt->x=i;

        if(i<26)
        {
            pt->p=(Tesla*)malloc(sizeof (Tesla));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    pt=head;

    while(pt->p->x!=5)
    {
        pt=pt->p;
    }
    head2=pt->p;

    pt->p=head2->p;
    free(head2);
    pt=head;

    while(pt!=NULL)
    {
        printf("%c-%d\n",pt->c_n,pt->x);
        pt=pt->p;
    }
    return 0;
}
