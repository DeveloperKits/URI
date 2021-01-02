#include<stdio.h>
int main()
{
    int N,i,j,R,c=1;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=3; j++)
        {
            if(c==1)
            {
                R=i;
                printf("%d\n%d",R,R);
            }
            else if(c==2)
            {
                R=i*i;
                printf("%d\n%d",R,R+1);
            }
            else
            {
                R=i*i*i;
                printf("%d\n%d",R,R+1);
            }
            c++;
        }
        printf("\n");
        c=1;
    }

}
