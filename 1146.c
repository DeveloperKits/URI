#include<stdio.h>
int main()
{
    int N[100],i,j,l=0;

    for(i=1;i<=100;i++)
    {
        scanf("%d",&N[i]);

        if(N[i]==0)
        {
            break;
        }
        l++;
    }

    for(i=1;i<=l;i++)
    {
        for(j=1;j<=N[i];j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
