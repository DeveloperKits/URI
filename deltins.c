#include<stdio.h>
#define No 6
int stack[No];
int top=-1;

void push(int data)
{
    if(top<-1)
    {
        printf("Stack is empty");
    }
    top++;
    stack[top]=data;
    //stack[top--];
}

int main()
{
    push(4);
    push(5);
    for(int i=0; i<No; i++)
    {
        printf("%d",stack[i]);
    }
}

