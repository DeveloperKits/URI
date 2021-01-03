#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,a_l=0,b_l=0,flag=0;
    gets(a);
    gets(b);

    for(i=0;a[i]!='\0';i++)
    {
        a_l++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        b_l++;
    }

        if(a_l!=b_l)
        {
            printf("different");
        }
        else
        {
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]==b[i])
                {
                    flag++;
                }
            }
            if(flag==a_l && flag==b_l)
            {
                printf("same");
            }
            else
            {
                printf("different");
            }
        }
        return 0;
}
