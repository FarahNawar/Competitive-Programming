#include<iostream>
using namespace std;
int main()
{
    int k;
    while(cin>>k)
    {
        int x;
        int Count=0;
        for(int y=k+1; y<=2*k; y++)
        {
            if((k*y)%(y-k)==0)
            {
                x=(k*y)/(y-k);
                Count++;
            }
        }
        cout<<Count<<endl;
        for(int y=k+1; y<=2*k; y++)
        {
            if((k*y)%(y-k)==0)
            {
                x=(k*y)/(y-k);
                cout<<"1/"<<k<<" = 1/"<<x<<" + 1/"<<y<<endl;
            }

        }
    }

}
