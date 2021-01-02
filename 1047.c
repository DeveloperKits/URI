#include<stdio.h>
int main()
{
    int I_h,I_m,F_h,F_m,H,M;
    scanf("%d%d%d%d",&I_h,&I_m,&F_h,&F_m);

    if(I_h>F_h && F_m>I_m )
    {
        H=(24-I_h)+F_h;
        M=(F_h-I_h);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(F_h>I_h && I_m>F_m)
    {
        H=(F_h-I_h);
        M=(60-I_m)+F_m;
        if(H==1)
        {
            H=0;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(F_h>I_h && F_m>I_m)
    {
        H=(F_h-I_h);
        M=(F_h-I_h);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(I_h>F_h && I_m>F_m)
    {
        H=(24-I_h)+F_h;
        M=(60-I_m)+F_m;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }


    return 0;
}

