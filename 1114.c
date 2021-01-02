#include<stdio.h>
int main()
{
     int n[100],i;
     for(i=0;i<100;i++)
     {
         scanf("%d",&n[i]);
     }
     for(i=0;i<100;i++)
     {
         if(n[i]!=2002)
         {
             printf("Senha Invalida\n");
         }
         if(n[i]==2002)
         {
             printf("Acesso Permitido\n");
             break;
         }
     }
     return 0;
}
