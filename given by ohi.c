#include<stdio.h>
int n;
int d;
int square(int num1,int num2)
{
    int i,k,x=0;
    char c[n];
    for(i=0;i<=n;i++)
    {
        k=(i*i);
        c[i]=k+'0';
        for(i=0;c[i]!='\0';i++)
        {
            if(c[i]==d)
            {
                x++;

            }
        }
    }
    return x;
}
int main()
{
    int n,d,i,X;
    scanf("%d%d",&n,&d);

    X=square(n,d);
    printf("%d",X);

    return 0;
}
