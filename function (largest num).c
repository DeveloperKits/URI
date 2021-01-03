#include<stdio.h>
int n;
int largest(int a[]);
int main()
{
    int i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    s=largest(a);
    printf("%d",s);
}
int largest(int a[])
{
    int i;
    int max=a[0];
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];

        }
    }
    return max;
}
