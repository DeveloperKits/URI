#include<stdio.h>
int main()
{
    char C[100],n;
    int i,count=0;
    gets(C);
    scanf("%c",&n);

    for(i=0;C[i]!='\0';i++)
    {
        if(C[i]==n)
        {
            count++;
        }
    }
    printf("%c = %d",n,count);
}
