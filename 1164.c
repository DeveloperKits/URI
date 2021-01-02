#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int X[n],sum=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&X[i]);

        for(j=1; j<X[i]; j++)
        {
            if(X[i]%j==0)
            {
                sum=sum+j;
            }
        }

        if(sum==X[i])
        {
            printf("%d eh perfeito\n",X[i]);
        }
        else
        {
            printf("%d nao eh perfeito\n",X[i]);
        }

        sum=0;
    }

    return 0;
}


