#include<stdio.h>
int main()
{
    int x,y,i,test,c,sum;
    scanf("%d",&test);
    while(test--)
    {
        sum=0;
         scanf("%d %d",&x,&y);
         if(x%2==0)
         {
             for(i=x+1,c=1;c<=y;c++,i+=2)
             {
                 sum=sum+i;
             }
             printf("%d\n",sum);
         }
         else
         {
             for(i=x,c=1;c<=y;c++,i+=2)
             {
                 sum=sum+i;
             }
             printf("%d\n",sum);
         }
    }

}
