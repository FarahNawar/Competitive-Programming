#include<stdio.h>
int main()
{
    double g1,g2;
    int i=0,test,pa,pb;
    scanf("%d",&test);
    while(test--)
    {
         scanf("%d %d",&pa,&pb);
        scanf("%lf %lf",&g1,&g2);
        i=0;
        while(2)
    {
        i++;
        pa*=(g1/100.0)+1.0;
        if(g2!=0)
        pb*=(g2/100.0)+1.0;
        if(i>100)
        {
            printf("Mais de 1 seculo.\n");
            break;
        }
        if(pa>pb)
        {
             printf("%d anos.\n",i);
             break;
        }
    }
    }
}
