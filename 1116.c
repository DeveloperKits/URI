#include<stdio.h>
int main()
{
    int n;
    double R;
    scanf("%d",&n);
    int i,a[n],b[n];

    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==0 && b[i]!=0)
        {
            printf("0.0\n");
        }
        else if(b[i]==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            R=(double)a[i]/b[i];
            printf("%.1lf\n",R);
        }
    }
    return 0;
}
