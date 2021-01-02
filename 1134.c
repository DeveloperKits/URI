#include<stdio.h>
int main()
{
    int a[10],i,X=0,Y=0,Z=0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<1 && a[i]>4)
        {
           scanf("%d",&a[i]);
        }
        if(a[i]==4)
        {
            break;
        }
    }


    for(i=0;i<10;i++)
    {
        if(a[i]==1)
        {
            X++;
        }
        if(a[i]==2)
        {
            Y++;
        }
        if(a[i]==3)
        {
            Z++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",X);
    printf("Gasolina: %d\n",Y);
    printf("Diesel: %d\n",Z);

    return 0;
}
