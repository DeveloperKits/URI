#include<stdio.h>

int arr[10];
int F=0,R=0;

void enqueue(int value)
{
    if(R>=10)
    {
        printf("Queue are overflow\n");
        return;
    }
    else
    {
        arr[R++]=Value;
    }
}

void dequeue()
{
    if(F==R || F>R)
    {
        printf("Queue have no value\n");
        return;
    }
    else
    {
        F++;
    }
}

void display()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    dequeue();
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(12);
    dequeue();
    enqueue(13);
    enqueue(14);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    display();
}

