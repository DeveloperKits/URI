#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        cin>>x[i];

        for(j=2;j<x[i];j++)
        {
            if(x[i]%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<x[i]<<" eh primo\n";
        }
        else
        {
            cout<<x[i]<<" nao eh primo\n";
        }

        c=0;
    }

}
