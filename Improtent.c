#include<stdio.h>
int main()
{
    int n,i,j,temp,lar;
    printf("Enter Array No:");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\n");

    lar=a[n];
    for(i=n-3;i>0;i--)
    {
        lar=a[i];
        break;
    }
    printf("Third largest number:%d\n",a[i]);


}
