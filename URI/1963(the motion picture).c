#include<stdio.h>
int main()
{
    double np,op;
    scanf("%lf %lf",&op,&np);
    printf("%.2lf%%\n",((np-op)*100)/op);
}
