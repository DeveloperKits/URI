#include<stdio.h>
int main()
{
    int *p,i;
    p=(int*)malloc(5*sizeof(int));

    for(i=0;i<5;i++)
    {
        *p=i;
        p++;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*p);
    }
    return 0;
}
