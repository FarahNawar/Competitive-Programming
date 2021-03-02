#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],s1[100],s2[100];
    long int t,m,n;
    scanf("%ld",&t);

    while(t--)
    {
        scanf("%s %s %s %s",s1,a,s2,b);
        scanf("%ld %ld",&m,&n);
        if((m+n)%2==0)
        {
            if(a[0]=='P')
                printf("%s\n",s1);
            else
                printf("%s\n",s2);
        }
        else
        {
             if(a[0]=='I')
                printf("%s\n",s1);
            else
                printf("%s\n",s2);
        }
    }
}
