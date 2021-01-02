#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,r;
    cin>>n;

    if(n>2 && n<1000)
    {
        for(i=1; i<=10; i++)
        {
            r=i*n;
            cout<<i<<" X "<<n<<" = "<<r<<"\n";
        }
    }
    return 0;
}
