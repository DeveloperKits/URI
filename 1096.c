#include<stdio.h>
int main()
{
    int i,j,J=7,c=0;

    for(i=1; i<=9; i=i+2)
    {
        for(j=J; j>=J-2; j--)
        {
            printf("I=%d J=%d\n",i,j);
            c++;
            if(c==3)
            {
                J=J+2;
            }
        }
        if(c==3)
        {
            c=0;
        }

    }
    return 0;
}
