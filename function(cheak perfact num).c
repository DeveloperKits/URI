#include<stdio.h>
int n;
int perfect(int n);
int main()
{
    int n,s;
    scanf("%d",&n);

    s=perfect(n);
    if(s==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("Not perfect number");
    }
    return 0;
}
int perfect(int n)
{
    int sum=0,i;
    int num=n;
    for(i=1;i<n;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
