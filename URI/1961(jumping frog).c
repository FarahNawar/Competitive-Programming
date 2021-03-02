#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,n,i,a[108],b=-1;
    scanf("%d %d",&p,&n);
    scanf("%d",&a[1]);
    for(i=2;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(abs(a[i]-a[i-1])>p)
        {
            b++;
            printf("GAME OVER\n");
            break;
        }
    }
    if(b==-1)
    printf("YOU WIN\n");


}
