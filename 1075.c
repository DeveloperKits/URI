#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("2\n");
    for(i=2;i<10000;i++)
    {
        if(i%n==0)
        {
            i=i+2;
            printf("%d\n",i);
        }
    }
    return 0;
}
