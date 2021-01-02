#include<stdio.h>

int main()
{
    int i,j;
    double I=0,J=0.8;

    for(;i;)
    {

        if(I>2)
        {
            break;
        }


        J=J+0.2;
        printf("I=%.1lf J=%.1lf\n",I,J);
        J=J+1.0;
        printf("I=%.1lf J=%.1lf\n",I,J);
        J=J+1.0;
        printf("I=%.1lf J=%.1lf\n",I,J);

        J=J-2;
        I=I+0.2;
    }
    return 0;
}

