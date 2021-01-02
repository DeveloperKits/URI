#include<stdio.h>
int main()
{
    int i,N,r,C=1;
    scanf("%d",&N);

    if(N>0 && N<13)
    {
        for(i=0; i<N; i++)
        {
            r=(N-i);
            C=C*r;
        }
    }
    printf("%d\n",C);

    return 0;
}
