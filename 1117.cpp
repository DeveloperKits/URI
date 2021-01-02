#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,temp1,temp2,avg,l=0;

    while(true)
    {
        cin>>n;

        if(n>=0 && n<=10)
        {
            l++;
            if(l==2)
            {
                temp2=n;
                avg=((temp1+temp2)/2.0);
                cout<<"media = "<<avg<<"\n";
            }
            temp1=n;
        }
        else
        {
            cout<<"nota invalida"<<"\n";
        }


        if(l==2)
        {
            break;
        }
    }
    return 0;
}

