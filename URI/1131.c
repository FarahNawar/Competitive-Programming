#include<stdio.h>
int main()
{
    int inter,gremio,a,b,res,iw=0,gw=0,drw=0,c=0;
    while(2)
    {
        scanf("%d %d",&inter,&gremio);
        c++;
        if(inter>gremio)
           iw++;
        else if(gremio>inter)
            gw++;
        else
            drw++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&res);
        if(res==1)
            continue;
        if(res==2)
        break;
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",iw);
    printf("Gremio:%d\n",gw);
    printf("Empates:%d\n",drw);
    if(iw>gw)
    printf("Inter venceu mais\n");
    else if(gw>iw)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
}
