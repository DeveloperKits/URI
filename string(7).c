#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,l_a=0,l_b=0,flag=0;
    gets(a);
    gets(b);

    for(i=0; a[i]!='\0'; i++)
    {
        l_a++;
    }
    for(i=0; b[i]!='\0'; i++)
    {
        l_b++;
    }

    if(l_a==l_b)
    {
        for(i=0; a[i]!='\0'; i++)
        {
            for(i=0; b[i]!='\0'; i++)
            {
                if(a[i]!=b[i])
                {
                    printf("diff");
                }
                else
                {
                    printf("same");

                }
            }
        }
    }
    else
    {
        printf("Diff");
    }


}
