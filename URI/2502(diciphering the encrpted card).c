#include<stdio.h>
int main()
{
    int c,n;
    char cipher[1009];
    scanf("%d %d",&c,&n);
    while(n--)
    {
        char a[c],b[c];
        int c=0;
        scanf("%s %s",a,b);
        scanf("%s",cipher);
        for(i=0;i<strlen(cipher);i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[j]==cipher[i])
                {
                    printf("%c",b[i]);
                }

            }
        }

    }
}
