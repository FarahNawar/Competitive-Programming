#include<stdio.h>
int main()
{
    int t,s1,s2,b1,b2,a1,a2,suma1=0,suma2=0,sumb1=0,sumb2=0,sums1=0,sums2=0;
    char player[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",player);
        scanf("%d %d %d",&s1,&b1,&a1);
        sums1=sums1+s1;
        sumb1=sumb1+b1;
        suma1=suma1+a1;
        scanf("%d %d %d",&s2,&b2,&a2);
        sums2=sums2+s2;
        sumb2=sumb2+b2;
        suma2=suma2+a2;
    }
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",((double)sums2*100)/sums1,((double)sumb2*100)/sumb1,((double)suma2*100)/suma1);
}
