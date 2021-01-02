#include<stdio.h>
int main()
{
    int N,i,c=0,sum=0;
    scanf("%d",&N);
    int x[N],y[N];

    for(i=0;i<N;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    //}

    //for(i=0;i<N;i++)
    //{
        while(1)
        {
            if(x[i]%2!=0)
            {
                sum=sum+x[i];
                c++;
            }
            x[i]++;
            if(c==y[i])
            {
                printf("%d\n",sum);
                c=0;
                sum=0;
                break;
            }
        }
    }

    return 0;
}
