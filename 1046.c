#include<stdio.h>
int main()
{
    int a,b,X;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        X=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",X);
    }
    else if(b>a)
    {
        X=(b-a);
        printf("O JOGO DUROU %d HORA(S)\n",X);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }


    return 0;
}
