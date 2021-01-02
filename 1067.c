#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);

    for(i=a+1;i<a+60;i++)
    {
        if(i%2==1)
        {
            c++;
            if(c>=1 && c<=6)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
