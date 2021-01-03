#include<stdio.h>

int gcd(int a, int b)
{
    if(b==0) //base case
        return a;

    return gcd(b, a%b);
}

int main()
{
    int A,B,n;
    scanf("%d%d",&A,&B);
    n=gcd(A,B);

    printf("%d",n);

    return 0;
}
