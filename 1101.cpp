#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,x,y,temp,sum=0;

    while(1)
    {
        cin>>x>>y;

        if(x<=0 || y<=0)
        {
            break;
        }

        if(x<y)
        {
            temp=x;
            x=y;
            y=temp;
        }

        for(i=y; i<=x; i++)
        {
            sum=sum+i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<"\n";

        sum=0;
    }
    return 0;
}
