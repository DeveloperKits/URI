#include<stdio.h>
int primeornot(int n);

int main()
{
    int n,s;
    scanf("%d",&n);
    s=primeornot(n);
    if(s==0)
    {
        printf("prime");
    }
    else
    {
        printf("not");
    }

    return 0;
}
int primeornot(int n)
{
    int i,x=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            x++;
        }

    }
    if(x==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }


}




