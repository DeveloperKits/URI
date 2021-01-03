#include<stdio.h>
int dhara(int a)
{
    int i,sum=0;
    if(a==1){
        return 1;
    }
    sum=a+dhara(a-1);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",dhara(n));

}
