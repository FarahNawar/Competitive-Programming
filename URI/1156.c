#include<stdio.h>
int main()
{
    int i,j;
    double s=1;
    for(i=3,j=2;i<=39;j*=2,i+=2)
    {
      s+=(double)i/j;
    }
    printf("%.2lf\n",s);

}
