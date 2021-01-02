#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);

    if(n>2 && n<1000)
    {
        for(i=1; i<=10; i++)
        {
            r=i*n;
            printf("%d X %d = %d",i,n,r);

            if(i<10)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
