#include<stdio.h>
int sum(int num1,int num2);
int subtract(int num1,int num2);

int main()
{
    int a,b,x,y;
    printf("Take two number:");
    scanf("%d%d",&a,&b);
    int n;
    printf("Choose a number from 1 to 3 for program:");
    scanf("%d",&n);
    if(n==1)
    {
        x=sum(a,b);
        printf("%d",x);
    }
    if(n==2)
    {
        y=subtract(a,b);
        printf("%d",y);
    }
    if(n==3)
    {

    }
    return 0;
}
int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
int subtract(int num1, int num2)
{
    int subtract;
    subtract=num1-num2;
    return subtract;
}
