#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,j;

    while(1)
    {
        cin>>N;

        if(N==0)
        {
            break;
        }

        for(j=1; j<=N; j++)
        {
            cout<<j;
            if(j<N)
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}

