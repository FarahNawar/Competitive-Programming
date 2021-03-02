#include<stdio.h>
int main()
{
    double s1,s2,media;
    int x;
    while(2)
    {
        scanf("%lf",&s1);
        if(s1>=0&&s1<=10)
        {
            while(1)
            {
                scanf("%lf",&s2);
                if(s2>=0&&s2<=10)
                {
                    printf("media = %.2lf\n",(s1+s2)/2);
                    while(5)
                    {
                        scanf("%d",&x);
                        printf("novo calculo (1-sim 2-nao)\n");
                        if(x==2||x==1)
                            break;
                    }
                    if(x==2||x==1)
                        break;
                }
                else
                {
                    printf("nota invalida\n");
                    continue;
                }
            }
        }
        else
        {
            printf("nota invalida\n");
            continue;
        }
        if(x==2)
            break;
    }
}
