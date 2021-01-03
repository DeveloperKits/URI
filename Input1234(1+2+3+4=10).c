#include<stdio.h>
int main()
{
    int n,i,c,sum=0;

    scanf("%d",&n);

    while(n!=0)
    {

        c=n%10;
        printf("%d+",c);

        i=n/10;
        sum=sum+c;
    }
    printf("%d\n",sum);
}
