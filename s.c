#include<stdio.h>
int main()
{
    int a[10];
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    printf("%d ",a[0]);

    return 0;

}
