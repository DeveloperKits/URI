#include<stdio.h>

int add(num1,num2)
{
    int sum = num1+num2;
    return sum;
}

int main()
{
    int a,b,c;
    a=2;
    b=5;
    c=add(a,b);
    printf("%d\n",c);
}
