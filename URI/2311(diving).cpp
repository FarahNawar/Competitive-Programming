
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double d,score[15],sum;
    char diver[100];
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%s",diver);
        scanf("%lf",&d);
        for(i=0;i<7;i++)
        {
            scanf("%lf",&score[i]);
            sum=score[i]+sum;
        }
        sort(score,score+7);
        sum=sum-score[0]-score[6];
        printf("%s %.2lf\n",diver,sum*d);
    }
}

