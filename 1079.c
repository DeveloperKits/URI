#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],b[n],c[n],R;

    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&a[i],&b[i],&c[i]);
    }

    for(i=0;i<n;i++)
    {
        R=(a[i]*2+b[i]*3+c[i]*5)/10;
        printf("%.1f\n",R);
    }
    return 0;

}
