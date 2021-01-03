#include<stdio.h>
//#define No 7

int stack[100];
top=0;

void push(int value)
{
    /*if(top>No)
    {
        printf("Stack is Full\n");
    }
    else
    {
        stack[top++]=value;

        printf("%d\n",value);
    }*/
    stack[top++]=value;
}
/*void peek()
{
    if(top<0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("\n%d \n\n",stack[top]);
    }
}*/
void pop()
{
    if(top==0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        top--;
    }
}
void print()
{
    for(int i=0;i<top;i++)
    {
        printf("%d",stack[i]);
        printf("\n");
    }
}
void main()
{
    push(10);
    push(20);
    push(30);
    //peek();
    push(40);
    push(50);
    pop();
    //print();
    //peek();
    push(60);
    push(70);
    print();
}
