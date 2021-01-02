#include<stdio.h>

int main()
{
    int N,i,x;
    scanf("%d",&N);
    int a[60];

    a[0]=0;
    a[1]=1;

    for(i=2; i<60; i++)
    {
        a[i]=a[i-2]+a[i-1];
    }

    for(i=0; i<N; i++)
    {
        scanf("%d",&x);

        if(x>=0 && x<=60)
        {
            printf("Fib(%d) = %d\n",x,a[x]);
        }
    }
    return 0;
}
