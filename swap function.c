#include<stdio.h>
void swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("%d\n%d",num1,num2);


}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    swap(a,b);


    return 0;

}
