#include<stdio.h>
int main()
{
    int i,j=7,a,p;
    for(i=1;i<=9;i+=2)
    {    p=j;
        for(a=1;a<=3;a++)
        {

          printf("I=%d J=%d\n",i,p--);
        }
        j+=2;
    }
}
