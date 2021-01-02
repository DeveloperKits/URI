#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int x,y,temp,temp1,temp2,i,l=0;
    cin>>x>>y;


    if(x>y)
    {
        temp=y;
        y=x;
        x=temp;
    }

    for(i=x; i<=y; i++)
    {
        if(i%5==0)
        {
            l++;
            temp1=i+2;
            temp2=i+3;

            if(temp1<y)
            {
                if(l>1)
                {
                    cout<<endl;
                }
                cout<<temp1;
                if(temp1+1!=y)
                {
                    cout<<endl;
                }

                if(temp2<y)
                {
                    cout<<temp2;
                }
            }
        }
    }


    return 0;
}
