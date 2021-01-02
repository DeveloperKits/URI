#include<stdio.h>
int main()
{
    int a[10],b[10],i,l=0;

    for(i=0;i<10;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]==b[i])
        {
            break;
        }
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>b[i])
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }
    return 0;

}
