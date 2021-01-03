#include<stdio.h>
#include<ctype.h>

int stack[50];
int top=-1;

void push(int data)
{
    stack[++top]=data;
}

int pop()
{
    return (stack[top--]);
}

int main()
{
    char post[50],ch;

    int i=0, op1,op2;
    printf("Enter postfix:");
    scanf(" %s",post);

    while((ch=post[i++])!='\0')
    {
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            printf("%d %d\n",op1,op2);
            switch(ch)
            {
            case'+':
                push(op1+op2);
                break;
            case'-':
                push(op1-op2);
                break;
            case'*':
                push(op1*op2);
                break;
            case'/':
                push(op1/op2);
                break;
            }
        }
    }

    printf("result=%d\n",stack[top]);

    return 0;
}
