#include<bits/stdc++.h>
#include<stdio.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age,i;
    ofstream file;
    file.open("Give_sms.txt",ios::out|ios::app);

    for(i=0; i<4; i++)
    {
        cout<<"Enter your name:";
        getline(cin,name);
        file<<name<<\t;

        cout<<"Enter your Age:";
        cin>>age;
        file<<age<<endl;

        cin.ignore();

        file.close();
        cout<<"Name saved";

    }

    return 0;
}
