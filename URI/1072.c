#include<stdio.h>
int main()
{
    int test,array[10050],ci=0,co=0,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>=10&&array[i]<=20)
            ci++;
        else
            co++;
    }
    printf("%d in\n%d out\n",ci,co);
}
