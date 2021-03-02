#include<iostream>
using namespace std;
int survivor(int n);
int main()
{
    int t;
    cin>>t;
     for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int x=n;
        int Count=0;
        while(2)
        {
            if(survivor(x)==x)
                break;
            else
            {
                x=survivor(x);
                Count++;
            }
        }
        cout<<"Case "<<i<<": "<<Count<<" "<<survivor(x)<<endl;
    }
}
int survivor(int n)
{
    if(n==1) return 1;
    else
        return ((survivor(n-1)+1)%n)+1;
}
