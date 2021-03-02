#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n;
        cin>>n;
        int age[100];
        for(int i=0;i<n;i++)
            cin>>age[i];
        sort(age,age+n);
        int mid=(n/2);
        cout<<"Case "<<j<<": "<<age[mid]<<endl;

    }

}
