#include<stdio.h>
int main()
{
    char ara[10];
    int count=0,sum=0;
    while(count<3)
    {
        gets(ara);
        if(ara[0]=='-')
            {
                if(ara[1]=='-')
                {
                    if(ara[2]=='-') sum+=0;
                    else sum+=1;
                }
                else
                {
                    if(ara[2]=='-') sum+=2;
                    else sum+=3;
                }
                continue;
            }
            else if(ara[0]=='*')
            {
                if(ara[1]=='-')
                {
                    if(ara[2]=='-')sum+=4;
                    else sum+=5;
                }
                else
                {
                    if(ara[2]=='-') sum+=6;
                    else sum+=7;
                }
                continue;
            }
            if(ara[0]=='c')
            {
                printf("%d\n",sum);
                sum=0;
                count++;
            }
    }
}
