#include<stdio.h>
int main()
{
    int a[10],i,temp;

    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i+2)
    {
        a[i]=a[i+1];
        temp=a[i];
        a[i+1]=temp;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;


}
