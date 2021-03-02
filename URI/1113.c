#include<stdio.h>
int main()
{
    int x=1,y=0;
    while(x!=y)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
            printf("Decrescente\n");
        else if(x<y)
            printf("Crescente\n");
    }
}
