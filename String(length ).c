#include<stdio.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';++i);
    printf("%d",i);
    return 0;



}
