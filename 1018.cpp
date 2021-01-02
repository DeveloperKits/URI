#include<bits/stdc++.h>
using namespace std;

int sum(int N, int R, int temp)
{
    int c = 0;
    while (true)
    {
        c++;
        temp = temp + R;
        if (temp > N)
        {
            printf("%d nota(s) de R$ %d,00\n",--c,R);
            temp = temp - R;
            return temp;
        }

    }
}

int main()
{
    int N;
    cin>>N;
    int temp = 0;

    if(N>1 && N<1000000)
    {
        temp=sum(N,100,temp);
        temp=sum(N,50,temp);
        temp=sum(N,20,temp);
        temp=sum(N,10,temp);
        temp=sum(N,5,temp);
        temp=sum(N,2,temp);
        temp=sum(N,1,temp);
    }
    return 0;
}
