#include<bits/stdc++.h>
#include<stdio.h>
#include<fstream>
#include<string>
using namespace std;

class animal
{
protected:
    string  name;
    int age;

public:
    void set_value(int a,string n)
    {
        age=a;
        name=n;
    }
};

class zebra: public animal
{
public:
    void sms_zeb()
    {
        cout<<"This animal name is "<<name<<". Age is "<<age<<"\n";
    }
};

class dolphin: public animal
{
public:
    void sms_dol()
    {
        cout<<"This animal name is "<<name<<". Age is "<<age<<"\n";
    }
};

int main()
{
    zebra zeb;
    dolphin dol;

    int a;
    string name;

    cin>>a>>name;
    zeb.set_value(a,name);

    cin>>a>>name;
    dol.set_value(a,name);

    zeb.sms_zeb();
    dol.sms_dol();

    string name;
    ofstream file;
    file.open("Give_sms.txt",ios::out|ios::app);
    cout<<"Enter your name:";
    getline(cin,name);
    file<<"It's create by Akash\n"<<name<<endl;
    file.close();
    cout<<"Name saved";

    return 0;
}
