#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class value
{
protected:
    char sign;
    int N;
    double i=0,temp;

public:
    void input(char sign)
    {
        sign=sign;
    }

public:
    void input(int N)
    {
        N=N;
    }

protected:
    double a[N];

public:
    void input(double a[])
    {
        a[i]=a[i];
        i++;
    }
};

class sign_operate: public value
{
    if(sign=='+')
    {
        temp=0;

        for(i=0; i<N; i++)
        {
            temp=temp+a[i];
            cout<<a[i];
            if(i<n-1)
            {
                printf(" + ");
            }
        }
        cout<<" = "<<temp<<"\n";
        return temp;
    }
};

int main()
{
    puts("Thank you for open a Digital Calculator\n\nFirstly please saw how to use this Calculator.\n\nRules:\n1. In the opening, User need to give what he/she want Addition, Substraction, Multiplication, Division, Power,...");
    puts("2. Then how many number you want to input.\n3. Then input the number.\n4. Then you continue it or close whole program or clear the data and continue again at first.");
    puts("5. If you continue it then you must to give which type you want to work. ...\n");
    puts(" -----------------------------------------------------------------------------------------------------------------------------\n");


    char sign;
    int N,i;

    value obj1;

    puts("Enter '+' for Addition, '-' for Substraction, '*' for Multiplication, '/' for Division, '^' for Power.");
    cin>>sign;
    obj1.input(sign);

    cout<<"Enter The Number who many time you want to "<<sign<<" in operator: ";
    cin>>N;
    obj1.input(N);

    double a[N];
    cout<<"Enter The Number:"<<endl;
    for(i=0; i<N; i++)
    {
        cin>>a[i];
        obj1.input(a);
    }
}
