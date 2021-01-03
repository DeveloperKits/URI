#include<stdio.h>

int fun(int *i,int j)
{
    (*i)++;
    j++;
    return *i*j;
}
void main()
{
    int i=5,j=3,k=1;
    k=fun(&i,j);
    printf("I=%d J=%d k=%d",i,j,k);
}
