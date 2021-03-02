#include<stdio.h>
int main()
{
    int max,position,i,array[150],n=100;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]>max)
            {
            max=array[i];
           position=i;
            }
    }
    printf("%d\n%d\n",max,position+1);

}
