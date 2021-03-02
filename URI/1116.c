#include<stdio.h>
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y!=0)
        {
            printf("%.1f\n",(float)x/y);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }
}
