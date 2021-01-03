#include<stdio.h>
//int square(int num);
int square(int num)
{
    int dual;
     dual=(num*num);
    return dual;
}
int main()
{
    int a,n;
    scanf("%d",&a);
    n = square(a);
    printf("%d",n);
    return 0;
}

