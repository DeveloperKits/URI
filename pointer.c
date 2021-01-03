#include<stdio.h>

void main()
{
    char *ptr,str[]="I Like C Pointer";
    ptr=str;
    ptr+=7;
    printf("1. %s\n",ptr);
    printf("2. %s\n",str);
    printf("3. %c\n",*ptr);
    printf("4. %c\n",*str);
}
