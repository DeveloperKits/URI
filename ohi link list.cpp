#include<bits/stdc++.h>
struct point
{
    char m;
    int n;

    struct point *p;

};
int main()
{
    int i;

    struct point *ptr,*head,*neww,*backk;
//head=(point*)malloc(sizeof(point));
    ptr=(point*)malloc(sizeof(point));
    head=ptr;
    for(i=0; i<26; i++)
    {
        ptr->m=(char)(96+i);
        ptr->n=1+i;

// printf("%c, %d\n",ptr->m,ptr->n);
        ptr->p=(point*)malloc(sizeof(point));
        if(i<25)
        {
            ptr=ptr->p;
        }

    }
    ptr->p=NULL;


    neww=(point*)malloc(sizeof(point));
    neww->m='e';
    neww->n= 2;

    ptr=head;
    neww->p=ptr;
    head=neww;
    ptr=head;


//printf("\n\n");
    while(ptr->p!=NULL)
    {
//printf("%c, %d\n",ptr->m,ptr->n);
        ptr=ptr->p;
    }
    backk=(point*)malloc(sizeof(point));
    backk->m='k';
    backk->n= 5;
    backk->p=NULL;
    ptr->p=backk;
    ptr=head;

    while(ptr!=NULL)
    {
        printf("%c, %d\n",ptr->m,ptr->n);
        ptr=ptr->p;
    }
    return 0;
}
