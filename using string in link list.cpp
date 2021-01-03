#include<bits/stdc++.h>
struct cellphone
{
    char m[3];
    double n;

    struct cellphone *p;

};
int main()
{
    int i;
    double value;

    struct cellphone *ptr,*head,*neww;
    ptr=(cellphone*)malloc(sizeof(cellphone));
    head=ptr;
    for(i=0; i<10; i++)
    {
        ptr->m[0]='A';
        ptr->m[1]='B';
        ptr->m[2]='C';
        scanf("%lf",&value);
        ptr->n=value;

// printf("%c, %d\n",ptr->m,ptr->n);
        if(i<99)
        {
            ptr->p=(cellphone*)malloc(sizeof(cellphone));

            ptr=ptr->p;
        }
    }
    ptr->p=NULL;


    neww=(cellphone*)malloc(sizeof(cellphone));
    neww->m[0]='E';
    neww->m[1]='E';
    neww->m[2]='E';
    neww->n= 2.00;

    ptr=head;
    neww->p=ptr;
    head=neww;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%s, %lf\n",ptr->m,ptr->n);
        ptr=ptr->p;
    }

}
