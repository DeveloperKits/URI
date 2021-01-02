#include<stdio.h>
#include<math.h>
int main()
{
    char a;
    double x,y,p,R;

    scanf("%s",a);
    scanf("%lf%lf",&x,&y);

    p=(y*0.15);
    R=x+p;

    printf("TOTAL = R$ %.2lf\n",R);
    puts(a);
    return 0;
}
