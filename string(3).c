#include<stdio.h>
int main()
{
    char a[100];
    int i,u_l=0,l_l=0,d=0,c=0;
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        c++;
        if(a[i]>='A' && a[i]<='Z')
        {
            u_l++;
        }
        if(a[i]>='a' && a[i]<='z')
        {
            l_l++;
        }
        if(a[i]>='1' && a[i]<='9')
        {
            d++;
        }

    }
    printf("\n");



    printf("%d\n Upper case: %d \n Lower case: %d \n Digits: %d \n",c,u_l,l_l,d);

    return 0;
}
