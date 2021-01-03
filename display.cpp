#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class mother
{
public:
    void display()
    {
        cout<<"\nMother";
    }
};

class daughter: public mother
{
public:
    void display()
    {
        cout<<"\n"<<"Daughter";
    }
};

int main()
{
    daughter obj;
    mother obj1;

    obj.display();
    obj1.display();

    return 0;
}
