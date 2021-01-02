#include<stdio.h>
int main()
{
    float a,R;
    scanf("%f",&a);

    if(a>=0 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        R=(a-2000.00)*0.08;
        printf("R$ %.2f\n",R);
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        R=(a-2000.00)*0.18;
        printf("R$ %.2f\n",R);
    }
    else if(a>4500.00)
    {
        R=(a-2000.00)*0.28;
        printf("R$ %.2f\n",R);
    }
    return 0;
}
