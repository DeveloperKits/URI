#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,g=0,d=0;

    while(true)
    {
        cin>>n;

        if(n>0)
        {
           if(n==1)
           {
               a++;
           }
           else if(n==2)
           {
               g++;
           }
           else if(n==3)
           {
               d++;
           }
           else if(n==4)
           {
               break;
           }
        }
    }

    cout<<"MUITO OBRIGADO"<<"\n";
    cout<<"Alcool: "<<a<<"\n";
    cout<<"Gasolina: "<<g<<"\n";
    cout<<"Diesel: "<<d<<"\n";

    return 0;
}
