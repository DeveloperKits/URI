#include<stdio.h>
int main()
{
    float n[4],i,media;

    for(i=0;i<4;i++)
    {
        scanf("%f",&n[i]);
    }

    for(i=0;i<4;i=i+2)
    {
        if(n[i]>=0.0 && n[i]<=10.0 && n[i+1]>=0.0 && n[i+1]<=10.0)
        {
            media=(n[i]+n[i+1])/2;
            printf("media = %.2f\n",media);
        }
        else
        {
            printf("nota invalida\n");
        }
    }
}
