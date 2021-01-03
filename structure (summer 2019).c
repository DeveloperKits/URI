#include<stdio.h>
struct student
{
    int Roll_no;
    char Name[100];
    float CGPA;
}student;
int name(char a[])
{
    int i;
    for(i=0;i<20;i++)
    {
        if(i%2==0)
        {
            printf("%s\n",student.Name[i]);
        }
    }
    return 0;
}
