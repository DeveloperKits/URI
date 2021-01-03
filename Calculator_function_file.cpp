void input()
{
    cout<<"Enter the size of number: ";
    cin>>n;
    double a[n];
    for(i=0; i<n; i++)
    {
        cin<<a[i];
    }
}

int ifelse1(char character)
{
    double a[n];
    if(character=='+')
    {
        void input();
        result= addition(a,n);
        return result;
    }
    else if(character=='-')
    {
        void input();
        result= substraction(a,n);
        return result;
    }
    else if(character=='*')
    {
        void input();
        result= multipication(a,n);
        return result;
    }
    else if(character=='/')
    {
        double x,y;
        cout<<"1st Number: ";
        cin>>x;
        cout<<"2nd Number: ";
        cin>>y;
        result= x/y;
        return result;
    }
    else if(character=='^')
    {
        double x,y;
        cout<<"Number: ";
        cin>>x;
        cout<<"power: ";
        cin>>y;

        result=pow(x,y);
        cout<<"Result: "<<result;
        return result;
    }
}

int ifelse2(char character,double total,double m)
{
    if(character=='+')
    {
        result=total+m;
        printf("%d + %d = %d\n",total,m,result);
        return result;
    }
    else if(character=='-')
    {
        result=total-m;
        printf("%d - %d = %d\n",total,m,result);
        return result;
    }
    else if(character=='*')
    {
        result=total*m;
        printf("%d X %d = %d\n",total,m,result);
        return result;
    }
    else if(character=='/')
    {
        result=total/m;
        printf("%d / %d = %d\n",total,m,result);
        return result;
    }
    else if(character=='^')
    {
        result=pow(total,m);
        printf("%d ^ %d = %d\n",total,m,result);
        return result;
    }
}

int addition(double a[],int n)
{
    temp=0;

    for(i=0; i<n; i++)
    {
        temp=temp+a[i];
        if(i<n-1)
        {
            printf("%d +",a[i]);
        }
    }
    cout<<" = "<<temp;
    return temp;
}

int substraction(double a[],int n)
{
    temp=0;

    temp=a[0];
    for(i=1; i<n; i++)
    {
        temp=temp-a[i];
        if(i<n-1)
        {
            printf("%d +",a[i]);
        }
    }
    cout<<" = "<<temp;
    return temp;
}

int multipication(double a[],int n)
{
    temp=1;

    for(i=0; i<n; i++)
    {
        temp=temp*a[i];
        if(i<n-1)
        {
            printf("%d +",a[i]);
        }
    }
    cout<<" = "<<temp;
    return temp;
}

void wrongnumber(char work)
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
            break;
        }
    }
}


