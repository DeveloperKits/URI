#include<stdio.h>
int main()
{
    int a[5];
    int i,max,index;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    index=0;

    for(i=0; i<5; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            index=i;
        }
    }
    printf("\n%d\n%d\n",max,index);

    return 0;
}
