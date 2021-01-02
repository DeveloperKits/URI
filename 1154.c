#include<stdio.h>
int main()
{
    int i,A,sum=0;
    double avg,c=0;

    while(1)
    {
        scanf("%d",&A);
        if(A<0)
        {
            break;
        }
        sum=sum+A;
        c++;
    }
    avg=sum/c;
    printf("%.2lf\n",avg);

    return 0;
}
