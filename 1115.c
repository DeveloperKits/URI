#include<stdio.h>
int main()
{
    int m[5],n[5],i;

    for(i=0; i<5; i++)
    {
        scanf("%d%d",&m[i],&n[i]);
    }

    for(i=0; i<5; i++)
    {
        if(m[i]==0 || n[i]==0)
        {
            break;
        }
        else
        {
            if(m[i]>0 && n[i]>0)
            {
                printf("primerio\n");
            }
            if(m[i]>0 && n[i]<0)
            {
                printf("quarto\n");
            }
            if(m[i]<0 && n[i]<0)
            {
                printf("terceiro\n");
            }
            if(m[i]<0 && n[i]>0)
            {
                printf("segundo\n");
            }
        }


    }
    return 0;
}
