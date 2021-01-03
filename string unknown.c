#include<stdio.h>
int main()
{
    int a[3],i,sum=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<3;i++)
    {
        sum+=a[i];
    }
    printf("%d,",sum);

    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
        if(i<2)
        {
            printf(",");
        }
    }
    return 0;
}
