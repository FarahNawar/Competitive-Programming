#include<stdio.h>
int main()
{
    int t,a[6],check=0,i;
    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==t)
        check++;
    }
    printf("%d\n",check);
}
