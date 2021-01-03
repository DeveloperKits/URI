#include<stdio.h>
int arr[5];

 int R=0,F=0;

void enqueue(int value)
{
    if(R>=4)
    {
        printf("Overflow.\n");
        return;
    }
    else
    {
        arr[R++]=value;

    }
}

void dequeue()
{
    if(R<=F )
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        F++;
    }
}

void print()
{
    int i;
    for(i=F;i<R;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%d   %d\n",F,R);
}

int main()
{
    dequeue();
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    enqueue(13);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    print();
}
