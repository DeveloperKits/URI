#include<bits/stdc++.h>
using namespace std;
struct point
{
    int data;
    struct point *p;
    struct point *q;

};
struct point *ptr, *head, *neww, *backk, *head2;
int main()
{
    ptr=(point*)malloc(sizeof(point));
    ptr->data=10;
    ptr->p=(point*)malloc(sizeof(point));
    ptr->q=(point*)malloc(sizeof(point));
    ptr->p->data=12;
    ptr->q->data=14;
    cout<<ptr->data<<" "<<ptr->p->data<<" "<<ptr->q->data<<endl;
}
