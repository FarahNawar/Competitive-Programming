#include<stdio.h>
int main()
{
    int x,y;
    double n,m,total;
    scanf("%d %d",&x,&y);
    switch(x)
    {
    case 1:
        n=4.00;
        break;
    case 2:
        n=4.50;
        break;
    case 3:
        n=5.00;
        break;
    case 4:
        n=2.00;
        break;
    case 5:
        n=1.50;
        break;
    }
   printf("Total: R$ %.2lf",n*y);

}
