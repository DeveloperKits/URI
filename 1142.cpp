#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=1;
    cin>>n;


    for(i=1;i<=n;i++)
    {
        for(j=c;j<=c+2;j++)
        {
            cout<<j<<" ";
        }
        cout<<"PUM"<<"\n";

        c=j+1;
    }

    return 0;
}
