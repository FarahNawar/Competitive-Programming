#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0;
    while(2)
    {
        scanf("%d",&n);
        if(n>=1&&n<=4)
        {
            if(n==1)
                a++;
            else if(n==2)
                b++;
            else if(n==3)
                c++;
            else if(n==4)
                break;
        }
    }
     printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);

}
