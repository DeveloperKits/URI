#include<stdio.h>
int sum(int n)
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=a+b;

    return s;
}
int sub(int n)
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=a-b;

    return s;
}
int main()
{
    printf("What you want?\n1 = Add\n2 = Sub\n3 = close\n");
    int n,X,Y;
    scanf("%d",&n);

    if(n==1)
    {
        X=sum(n);
        printf("%d\n",X);
    }
    if(n==2)
    {
        Y=sub(n);
        printf("%d\n",Y);
    }
    if(n==3)
    {
        return 0;
    }


}
