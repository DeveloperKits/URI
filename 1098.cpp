#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    double I=0,J=0.8;

    while(1)
    {
        if(I>2)
        {
            break;
        }

        while(1)
        {
            J=J+0.2;
            printf("I=%lf J=%lf\n"I,J);
            J=J+1;
            printf("I=%lf J=%lf\n"I,J);
            J=J+1;
            printf("I=%lf J=%lf\n"I,J);
        }
        I=I+0.2;
    }
    return 0;
}




