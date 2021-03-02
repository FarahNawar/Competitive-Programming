#include<stdio.h>
char rightans(int x,int y,int z);
int main()
{
    int x,y,z,i,t;
    char exp[50];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
         scanf("%d %d=%d",&x,&y,&z);
         exp[i]=rightans(x,y,z);
    }

}
char rightans(int x,int y,int z)
{
    if(x+y==z)
        return '+';
    else if(x-y==z)
        return '-';
    else if(x*y==z)
        return '*';
    else
        return 'I';
}
