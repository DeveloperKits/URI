#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,i,j,temp,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x>>y;

        if(x>y)
        {
            temp=y;
            y=x;
            x=temp;
        }
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }
        cout<<sum<<"\n";

        sum=0;
    }
    return 0;
}
