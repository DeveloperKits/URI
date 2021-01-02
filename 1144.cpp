#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,d=0;
    cin>>n;

    if(n>1 && n<1000)
    {
        for(i=1; i<=n; i++)
        {
            c=i;
            for(j=1; j<=3; j++)
            {
                d++;
                if(d==2)
                {
                    c=c*c;
                }
                else if(d==3)
                {
                    c=c*c*c;
                }
                cout<<c;
                if(d<3)
                {
                    cout<<" ";
                }
                c=i;

            }
            d=0;
            cout<<"\n";

            for(j=1;j<=3;j++)
            {
                d++;
                if(d==2)
                {
                    c=c*c;
                    c=c+1;
                }
                else if(d==3)
                {
                    c=c*c*c;
                    c=c+1;
                }
                cout<<c;
                if(d<3)
                {
                    cout<<" ";
                }
                c=i;
            }
            d=0;
            cout<<"\n";
        }
    }

    return 0;
}


