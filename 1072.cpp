#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,in=0,out=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=10 && a[i]<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout<<in<<" in"<<"\n"<<out<<" out"<<"\n";

    return 0;

}
