#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int n,i;
double m,temp,result,Result;
char work;

void input()
{
    cout<<"Enter the size of number: ";
    cin>>n;
    double a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

int addition(double a[],int n)
{
    temp=0;

    for(i=0; i<n; i++)
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

int substraction(double a[],int n)
{
    temp=0;

    temp=a[0];
    cout<<a[0]<<" - ";
    for(i=1; i<n; i++)
    {
        temp=temp-a[i];
        cout<<a[i];
        if(i<n-1)
        {
            printf(" - ");
        }
    }
    cout<<" = "<<temp<<"\n";
    return temp;
}

int multipication(double a[],int n)
{
    temp=1;

    for(i=0; i<n; i++)
    {
        temp=temp*a[i];
        cout<<a[i];
        if(i<n-1)
        {
            printf(" X ");
        }
    }
    cout<<" = "<<temp<<"\n";
    return temp;
}

int ifelse1(char character)
{
    if(character=='+')
    {
        cout<<"\nEnter the size of number: ";
        cin>>n;
        double a[n];
        cout<<"\nEnter the number:\n";
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        result= addition(a,n);
        return result;
    }
    else if(character=='-')
    {
        cout<<"\nEnter the size of number: ";
        cin>>n;
        double a[n];
        cout<<"\nEnter the number:\n";
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        result= substraction(a,n);
        return result;
    }
    else if(character=='*')
    {
        cout<<"\nEnter the size of number: ";
        cin>>n;
        double a[n];
        cout<<"\nEnter the number:\n";
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        result= multipication(a,n);
        return result;
    }
    else if(character=='/')
    {
        double x,y;
        cout<<"\n1st Number: ";
        cin>>x;
        cout<<"2nd Number: ";
        cin>>y;
        result= x/y;
        cout<<"Result: "<<result<<"\n";
        return result;
    }
    else if(character=='^')
    {
        double x,y;
        cout<<"\nNumber: ";
        cin>>x;
        cout<<"power: ";
        cin>>y;

        result=pow(x,y);
        //cout<<"Result: "<<result<<"\n";
        return result;
    }
}

double ifelse2(char character,double total,double m)
{
    if(character=='+')
    {
        result=total+m;
        return result;
    }
    else if(character=='-')
    {
        result=total-m;
        return result;
    }
    else if(character=='*')
    {
        result=total*m;
        return result;
    }
    else if(character=='/')
    {
        result=total/m;
        return result;
    }
    else if(character=='^')
    {
        result=pow(total,m);
        return result;
    }
}

int wrong_number(char work)
{
    while(true)
    {
        if(work!='+' && work!='-' && work!='*' && work!='/' && work!='^')
        {
            cout<<"This character is wrong. Please enter right Character: ";
            cin>>work;

        }
        else
        {
            return work;
            break;
        }
    }
}

int main()
{
    puts("Thank you for open a Digital Calculator\n\nFirstly please saw how to use this Calculator.\n\nRules:\n1. In the opening, User need to give what he/she want Addition, Substraction, Multiplication, Division, Power,...");
    puts("2. Then how many number you want to input.\n3. Then input the number.\n4. Then you continue it or close whole program or clear the data and continue again at first.");
    puts("5. If you continue it then you must to give which type you want to work. ...\n");
    puts(" -----------------------------------------------------------------------------------------------------------------------------\n");



    while(true)
    {
        int l=0;

        puts("Enter '+' for Addition, '-' for Substraction, '*' for Multiplication, '/' for Division, '^' for Power.");
        cin>>work;
        work=wrong_number(work);
        result=ifelse1(work);
        cout<<"Result: "<<result<<"\n";


        puts("\nIf you close this program at a time then click '0' --- if you run this program newly then click 1 --- if you run it once again with strorage result then click any number ->");
        int n;
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
                Result=result;
                puts("\nAgain enter '+' for Addition, '-' for Substraction, '*' for Multiplication, '/' for Division, '^' for Power.");
                cin>>work;
                Work=wrong_number(work);
                cout<<"Enter the number: ";
                cin>>m;
                result=ifelse2(work,Result,m);
                cout<<total<<Work<<m<<" = "<<result;

                puts("\nIf you close this program at a time then click '0' ->");
                int N;
                cin>>N;
                if(N==0)
                {
                    l++;
                    break;
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
