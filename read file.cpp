#include<bits/stdc++.h>
#include<stdio.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string line;//any name can use
    ifstream file("read_file.txt");

        cout<<"------Show all data:-------\n\n";
        while(getline(file,line))
        {
            cout<<line<<"\n";
        }

        file.close();
        cout<<"\n--------------End--------------";



}
