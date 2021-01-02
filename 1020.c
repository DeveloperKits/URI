#include<stdio.h>
int main()
{
    int a,y,m,d,r;
    scanf("%d",&a);

    if(a>365)
    {
        y=a/365;
        r=a-(365*y);
        m=r/30;
        d=r-(30*m);
    }
    else if(365>a)
    {
        y=0;
        m=a/30;
        d=a-(30*m);
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}
