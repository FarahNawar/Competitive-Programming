#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
            count++;
    }
    if(count%2==0)
        printf("%s0\n",a);
        else
            printf("%s1\n",a);

}
