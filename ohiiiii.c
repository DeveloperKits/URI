#include<stdio.h>
int main()
{
    int i,t,j,m,a[1000];

    scanf("%d",&t);


    if(t>=2 && t<=50)
    {

            for(i=0;i<1000;i++)
            {
                 printf("N[%d] = ",i);
                    m=0;
                for(j=0;j<t&&j==m;j++)
                {
                    printf("%d\n",j);

                     //break;
                }
                m++;


            }

    }
    return 0;
}


