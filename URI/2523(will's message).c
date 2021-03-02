#include<stdio.h>
int main()
{
    char s[30];
    int n,i,l;
    while(scanf("%s",s)!=EOF)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&l);
            printf("%c",s[l-1]);
        }
        printf("\n");
    }

}
