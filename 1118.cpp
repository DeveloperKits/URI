#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    double n,temp1,temp2,avg,l=0;

    while(true)
    {
        cin>>n;

        if(n==2)
        {
            break;
        }

        if(n==1)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<"\n";
            temp1=0;
            temp2=0;
            l=0;
        }
        else if(n>=0 && n<=10)
        {
            l++;
            if(l==2)
            {
                temp2=n;
                avg=((temp1+temp2)/2.0);
                printf("media = %.2f\n",avg);
                cout<<"novo calculo (1-sim 2-nao)"<<"\n";
            }
            temp1=n;
        }
        else
        {
           cout<<"nota invalida"<<"\n";
        }
    }
    return 0;
}


