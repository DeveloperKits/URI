#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);

    if(x>1 && x<20)
    {
        if(x<y && y<100000)
        {
            for(i=1 ; i<=y ; i++)
            {
                printf("%d",i);

                if(i%x!=0)
                {
                    printf(" ");
                }

                if(i%x==0)
                {
                    printf("\n");
                }
            }
        }
    }


    return 0;
}

