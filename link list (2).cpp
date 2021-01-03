#include<stdio.h>

struct point
{
    int x;
    int y;
    struct point *p;
};
int main()
{
    struct point *ptr;
    ptr=(point*)malloc(sizeof point);
    ptr->x=5;
    ptr->y=6

    printf("%d",ptr->x);
    printf("%d",ptr->y);
}
