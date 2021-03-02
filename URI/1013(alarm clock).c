#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h,m;
    while(2)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
    if(m2<m1)
    {
        m2=m2+60;
        m=m2-m1;
        h1++;
    }
    else
    {
        m=m2-m1;
    }
    if(h2<h1)
    {
        h2=h2+24;
        h=h2-h1;
    }
    else
        h=h2-h1;
    printf("%d\n",h*60+m);
    }


}
