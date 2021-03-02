#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int gcd,lcm;
    cin>>gcd>>lcm;
    if(lcm%gcd==0)
    {
        cout<<gcd<<" "<<lcm<<endl;
    }
    else
        cout<<-1<<endl;
    }

}
