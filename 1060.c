#include<stdio.h>
int main()
{
    float a[6],Avg,sum=0.0;
    int i,P=0;

    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)/*Disregard null values*/
        {
            P++;
            sum=sum+a[i];
        }
    }
    Avg=(sum/P);
    printf("%d valores positivos\n%.1f\n",P,Avg);

    return 0;
}
