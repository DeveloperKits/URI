#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j,c=1,d=0;
    cin>>x>>y;


    for(i=0;i<=y;i=i+x)
    {
        for(j=c;j<=x;j++)
        {
            d++;
            cout<<j;
            if(d<y)
             {
                 cout<<" ";
             }
        }
        cout<<"\n";

        c=j;

        if(d==y)
        {
            break;
        }

    }

    return 0;
}

