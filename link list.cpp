#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x;
    int y;
    struct point *p;
};
int main()
{
    struct point *ptr;
    ptr=(point*)malloc(sizeof (point));
    ptr->x=5;
    ptr->y=6;

    printf("%d\n",ptr->x);
    printf("%d\n",ptr->y);
}
