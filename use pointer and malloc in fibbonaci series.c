#include<stdio.h>
int main()
{
    int *p,n,i;
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        if(i==0 || i==1)
        {
            *p=i;
        }
        else
        {
            *p=*(p-1)+*(p-2);
        }
        p++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
