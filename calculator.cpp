#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
using namespace std;

class variable
{
protected:
    char sign;
    int N;
    double i=0,temp,A,B,n;

public:
    void input()
    {
        puts("Enter '+' for Addition, '-' for Substraction, '*' for Multiplication, '/' for Division, '^' for Power, '%' for remainder.");
        cin>>sign;


        cout<<"\nYou entered "<<sign<<" operand. That's why you can enter just two number:\n";
        cin>>A>>B;

    }

    void input2()
    {
        puts("Enter '+' for Addition, '-' for Substraction, '*' for Multiplication, '/' for Division, '^' for Power, '%' for remainder.");
        cin>>sign;
        cout<<"Enter a number:";
        cin>>n;
    }
};

class adding: public variable
{

public:
    void result()
    {
        if(sign=='^')
        {
            temp=pow(A,B);
        }
        else if(sign=='/')
        {
            temp=A / B;
        }
        else if(sign=='*')
        {
            temp=A * B;
        }
        else if(sign=='-')
        {
            temp=A - B;
        }
        else if(sign=='+')
        {
            temp=A + B;
        }
        else if(sign=='%')
        {
            temp=remainder(A,B);
        }
    }
};

/*class other_adding: public variable, public adding
{
public:
    void other_result()
    {
        if(sign=='^')
        {
            temp=pow(temp,n);
        }
        else if(sign=='/')
        {
            temp=temp / n;
        }
        else if(sign=='*')
        {
            temp=temp * n;
        }
        else if(sign=='-')
        {
            temp=temp - n;
        }
        else if(sign=='+')
        {
            temp=temp + n;
        }
        else if(sign=='%')
        {
            temp=remainder(temp,n);
        }
    }
};*/


class display: public variable, public adding//, public other_adding
{
public:
    void print()
    {
         cout<<endl<<A<<sign<<B<<" = "<<temp;
    }
    void print2()
    {
        cout<<endl<<temp<<sign<<n<<" = "<<temp;
    }
};


int main()
{
    puts("Thank you for open a Digital Calculator\n\nFirstly please saw how to use this Calculator.\n\nRules:\n1. In the opening, User need to give what he/she want Addition, Substraction, Multiplication, Division, Power,...");
    puts("2. Then how many number you want to input.\n3. Then input the number.\n4. Then you continue it or close whole program or clear the data and continue again at first.");
    puts("5. If you continue it then you must to give which type you want to work. ...\n");
    puts(" -----------------------------------------------------------------------------------------------------------------------------\n");

    int n,l=0;


    display obj;
    while(true)
    {
        add.input();
        add.result();
        obj.print();

        cout<<"If you finish this program then enter 0, If you start this program newly then enter 1, Otherwise enter any botton....Thank YOU\n";
        cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            continue;
        }
        else
        {
            while(true)
            {
                obj.input2();
                //obj.other_result();
                obj.print2();
                cout<<"If you finish this program then enter 0, If you start this program newly then enter 1, Otherwise enter any botton....Thank YOU\n";
                cin>>n;
                if(n==0)
                {
                    l++;
                    break;
                }
                else if(n==1)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if(l==1)
        {
            break;
        }
    }

    return 0;
}

/*protected:
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
    }*/

