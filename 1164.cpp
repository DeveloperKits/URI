#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int X[n],sum=0;

    for(i=0; i<n; i++)
    {
        cin>>X[i];

        for(j=1; j<X[i]; j++)
        {
            if(X[i]%j==0)
            {
                sum=sum+j;
            }
        }

        if(sum==X[i])
        {
            cout<<X[i]<<" eh perfeito\n";
        }
        else
        {
            cout<<X[i]<<" nao eh perfeito\n";
        }

        sum=0;
    }

    return 0;
}
