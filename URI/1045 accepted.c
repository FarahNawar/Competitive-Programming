#include<stdio.h>
int main()
{
   double array[10],a,b,c,temp;
   int i,j;
   scanf("%lf %lf %lf",&array[0],&array[1],&array[2]);
   for(i=0;i<2;i++)
   {
       for(j=0;j<2-i;i++)
       {
           if(array[j]<array[j+1])
           {
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
   }
   a=array[0];
   b=array[1];
   c=array[2];
   if(a>=(b+c))
    printf("NAO FORMA TRIANGULO\n");
   else if(a*a==(b*b+c*c))
   printf("TRIANGULO RETANGULO\n");
   else if(a*a>(b*b+c*c))
    printf("TRIANGULO OBTUSANGULO\n");
   else if(a*a<(b*b+c*c))
    printf("TRIANGULO ACUTANGULO\n");
   if(a==b&&b==c)
    printf("TRIANGULO EQUILATERO\n");
   else if(a==b||b==c||c==a)
    printf("TRIANGULO ISOSCELES\n");

}
