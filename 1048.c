#include<stdio.h>
int main()
{
    float a,P,T;
    char c;
    scanf("%f",&a);

    if(a>=0 && a<=400.00)
    {
        P=(a*0.15);
        T=a+P;
        c=37;/*for Saw output % we can code in two ways: 1. use ASCII code 37 for %.  2. use '%' for saw %.*/
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",T,P,c);
    }
    else if(a>=400.01 && a<=800.00)
    {
        P=(a*0.12);
        T=a+P;
        c=37;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",T,P,c);
    }
    else if(a>=800.01 && a<=1200.00)
    {
        P=(a*0.10);
        T=a+P;
        c=37;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",T,P,c);
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        P=(a*0.07);
        T=a+P;
        c=37;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",T,P,c);
    }
    else if(a>2000.00)
    {
        P=(a*0.04);
        T=a+P;
        c=37;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",T,P,c);
    }

    return 0;
}
