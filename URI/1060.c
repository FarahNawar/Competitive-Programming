#include<stdio.h>
int main()
{
    float a[10];
    int count=0,i;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>0)
            count++;
    }
    printf("%d valores positivos\n",count);
}
