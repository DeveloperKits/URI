#include<bits/stdc++.h>
using namespace std;
struct update
{
    char c_n;
    int x;
    struct update *p;
};

int main()
{
    int i;
    int data,newdata;
    scanf("%d %d",&data,&newdata);

    struct update *pt,*head;
    pt=(update*)malloc(sizeof (update));
    head=pt;

    for(i=1; i<=26; i++)
    {
        pt->c_n=96+i;
        pt->x=i;

        if(i<26)
        {
            pt->p=(update*)malloc(sizeof (update));
            pt=pt->p;
        }
        printf("%c-%d\n",pt->c_n,pt->x);
    }
    pt->p=NULL;

    pt=head;

    while(pt->x!=data)
    {
        pt=pt->p;
    }
    pt->x=newdata;

    pt=head;
    while(pt!=NULL)
    {
        printf("%c-%d\n",pt->c_n,pt->x);
        pt=pt->p;
    }
    return 0;

}

