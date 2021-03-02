#include<stdio.h>
int main()
{
    float s,me,ns;
    scanf("%f",&s);
    if(s>=0&&s<=400)
    {
        me=s*0.15;
        ns=s+me;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",ns,me);
    }
    else if(s>=400.01&&s<=800)
    {
        me=s*0.12;
        ns=s+me;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",ns,me);
    }
    else if(s>=800.01&&s<=1200)
    {
        me=s*0.1;
        ns=s+me;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",ns,me);
    }
    else if(s>=1200.01&&s<=2000)
    {
        me=s*0.07;
        ns=s+me;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",ns,me);
    }
    else
    {
        me=s*0.04;
        ns=s+me;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",ns,me);
    }
}
