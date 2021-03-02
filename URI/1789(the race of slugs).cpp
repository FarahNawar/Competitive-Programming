#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int l,v[55],mx,i;
    while(2)
    {
        scanf("%d",&l);
        for(i=1;i<=l;i++)
        {
            scanf("%d",&v[i]);
        }
       mx=std::max_element(v,v+l);
       printf("%d",mx);
       break;

    }
}
