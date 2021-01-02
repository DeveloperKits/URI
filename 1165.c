#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int x[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

        for(j=2;j<x[i];j++)
        {
            if(x[i]%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d eh primo\n",x[i]);
        }
        else
        {
            printf("%d nao eh primo\n",x[i]);
        }

        c=0;
    }

}
