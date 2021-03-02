#include<stdio.h>
int main()
{
    double s[5],a,b,c;
    int i,j,t;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&s[i]);
    }
    for(i=0;i<3;i++)
    {
        j=i;
        while(j>0&& s[j]<s[j-1])
        {
            t=s[j-1];
            s[j-1]=s[j];
            s[j]=t;
            j--;
        }
    }
   a=s[2];
   b=s[1];
   c=s[0];
    if(a>=(b+c))
    printf("NAO FORMA TRIANGULO\n");
    else if((a*a)==(b*b +c*c))
    printf("TRIANGULO RETANGULO\n");
   else if(a*a>(b*b + c*c))
    printf("TRIANGULO OBTUSANGULO\n");
   else if(a*a<( b*b + c*c))
    printf("TRIANGULO ACUTANGULO\n");
   if(a==b && b==c)
    printf("TRIANGULO EQUILATERO\n");
    else
    {
        if(a==b||b==c||c==a)
            printf("TRIANGULO ISOSCELES\n");
    }
    }

