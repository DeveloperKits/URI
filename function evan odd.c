#include<stdio.h>
int EvenOdd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,n;
    scanf("%d",&a);
    n=EvenOdd(a);
    if(n==1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
