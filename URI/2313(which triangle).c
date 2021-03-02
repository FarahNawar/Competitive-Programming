#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
       if(a!=b&&b!=c&&c!=a)
       {
           printf("Valido-Escaleno\n");
       }
       else
       {
           if(a==b&&b==c)
            printf("Valido-Equilatero\n");
           else
            printf("Valido-Isoceles\n");
       }
        if((a*a+b*b)==c*c||(a*a+b*b)==c*c||(c*c+b*b)==a*a)
        printf("Retangulo: S\n");
        else
        printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");
}
