#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005],i,n;
    std::cin>>n;
    for(i=0;i<n;i++)
        std::cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            std::cout<<a[i]<<std::endl;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        std::cout<<a[i]<<std::endl;
    }
}
