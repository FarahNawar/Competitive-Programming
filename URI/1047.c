#include<stdio.h>
int main()
{
    int ihour,imint,ehour,emint,hour,mint;
    scanf("%d %d %d %d",&ihour,&imint,&ehour,&emint);
    if(emint<imint)
    {
        emint=emint+60;
        mint=emint-imint;
        ihour++;
    }
    else
        mint=emint-imint;
    if(ehour<ihour)
    {
        ehour=ehour+24;
        hour=ehour-ihour;
    }
    else
        hour=ehour-ihour;
        if(ihour==imint&&imint==ehour&&ehour==emint)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,mint);

}
