#include<stdio.h>
int vector[1050];
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
            printf("N[%d] = %d\n",i,j);
            j++;
            if(j>n-1)
                j=0;
    }

}
