#include<stdio.h>
int main()
{
    int x,y,i,j,num=1;
    scanf("%d %d",&x,&y);
    for(i=1;num<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf("%d",num++);
            if(j!=x)
                printf(" ");
        }
        printf("\n");
    }

}
