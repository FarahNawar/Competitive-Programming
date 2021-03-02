#include<stdio.h>
#include<string.h>
int main()
{
    char num[25];
    int i;
    scanf("%s",num);
    for(i=strlen(num)-1;i>=0;i--)
        printf("%c",num[i]);
    printf("\n");
}
