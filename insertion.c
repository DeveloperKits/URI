#include<stdio.h>
#define No 6
int stack[No];
int top=3;

void push(int data)
{
    if(top>No)
    {
        printf("Stack is full");
    }
    top++;
    stack[top]=data;
}

int main()
{
    push(4);
    push(5);
    for(int i=0;i<No;i++){
        printf("%d",stack[i]);
    }
}
