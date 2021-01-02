#include<stdio.h>
int main()
{
    int m[3],n[3],i,sum=0;

    for(i=0; i<3; i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("%d",&n[i]);
    }

    for(i=0;i<3;i++)
    {
        if(m[i]==0 || m[i]<0 || n[i]==0 || n[i]<0)
        {
            break;
        }
        else
        {
            if(m[i]>=n[i])
            {
                for(i=n[i]; i<=m[i]; i++)
                {
                    sum=sum+i;
                    printf("j=%d ",i);
                }
                printf("sum=%d\n",sum);
            }
            else
            {
                for(i=m[i]; i<=n[i]; i++)
                {
                    sum=sum+i;
                    printf("j=%d ",i);
                }
                printf("sum %d\n",sum);
            }
        }
    }
    return 0;
}
