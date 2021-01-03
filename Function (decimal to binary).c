#include<stdio.h>
int main()
{
    int X,n,temp,i,c=0,d=0;
    scanf("%d",&X);
    for(i=X; i>0; i--)
    {
        n=X%2;
        temp=n;
        X=X/2;
        if(X==0||X==1){
            d++;
        }
        //temp=n;
        //X=X/2;
        //printf("%d",temp);
    }
    /*for(i=0; i<X; i++)
    {
        n=X%2;
        temp=n;
        X=X/2;
        printf("%d",temp);
    }*/
    //for(i=X;i>0;i--)
    //{
        //printf("%d",&temp);
    //}
    printf("%d",d);
    return 0;

}
