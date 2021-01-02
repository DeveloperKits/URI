#include<stdio.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(b>c && b>a /*&& a>c*/)
    {
        temp=b;
        b=a;
        a=temp;
    }
    else if(c>a && c>b /*&& b>a*/)
    {
        temp=c;
        c=a;
        a=temp;
    }
    /*else if(a>b && a>c && c>b)
    {
        temp=c;
        c=b;
        b=temp;
    }
    else if(b>c && b>a && c==a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    else if(c>a && c>b && a==b)
    {
        temp=a;
        a=c;
        c=temp;
    }*/


    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if((a*a)>((b*b)+(c*c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a)<((b*b)+(c*c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    else if((a*a)==((b*b)+(c*c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }


    if(a==b && b==c && a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
