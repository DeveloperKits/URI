#include<bits/stdc++.h>
using namespace std;
#define No 3


int top=-1;
void push(int data)
{
    if(top>No)
    {
        printf("Stack is full");
    }
    top++;
    stackk[top]=data;
}

struct Tesla
{
    char a;
    int x;
    int y;
    struct Tesla *p;
};
struct Tesla* top = NULL;

int main()
{
    int i;
    struct Tesla *pt, *head;
    pt=(Tesla*)malloc(sizeof(Tesla));
    head=pt;
    printf("%d\n",sizeof (Tesla));
    for(i=1; i<=3; i++)
    {
        pt->a=96+i;
        pt->x=i;
        pt->y=i+10;
        printf("%c-%d-%d\n",pt->a,pt->x,pt->y);
        if(i<10)
        {
            pt->p=(Tesla*)malloc(sizeof (Tesla));
            pt=pt->p;
        }
    }
    pt->p=NULL;

    push(10);
}
