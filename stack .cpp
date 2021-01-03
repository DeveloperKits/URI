#include<stdio.h>
int arr[10];

 int top=0;

void push(int value)
{
    if(top>=10)
    {
        printf("Overflow ");
        return;
    }
    else
    {
        arr[top++]=value;
    }
}

void pop()
{
    if(top<=0)
    {
        printf("Underflow ");
        return;
    }
    else
    {
        top--;
    }
}

void print()
{
    int i;
    for(i=0;i<top;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    pop();
    push(12);
    push(13);
    push(14);
    pop();
    push(15);
    push(17);
    pop();
    push(18);
    push(19);
    push(27);
    push(29);
    push(30);
    push(25);
    push(38);
    push(40);
    print();
}
