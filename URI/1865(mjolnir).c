#include<stdio.h>
int main()
{
    int t,n;
    char a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",a,&n);
        if(a[0]=='T'&&a[1]=='h'&&a[2]=='o'&&a[3]=='r')
            printf("Y\n");
            else
                printf("N\n");

    }
}
