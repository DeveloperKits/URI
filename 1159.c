#include<stdio.h>
int main()
{
    int X,sum=0,c=0;

    while(1)
    {
        scanf("%d",&X);

        if(X==0)
        {
            break;
        }
        while(1)
        {
            if(X%2==0)
            {
                sum=sum+X;
                c++;
            }
            X++;

            if(c==5)
            {
                printf("%d\n",sum);
                sum=0;
                c=0;
                break;
            }
        }
    }
    return 0;
}
