#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0 && a!=0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }
    else
        printf("Impossivel calcular\n");
}
