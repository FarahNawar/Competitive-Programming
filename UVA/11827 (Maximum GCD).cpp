#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> vinput;
int GCD(int a,int b);
void convertIntoInteger(string input);
int main()
{
    int test;
    cin>>test;
    getchar();
    while(test--)
    {
        vinput.clear();
        string input;
        getline(cin,input);
        convertIntoInteger(input);
int maxgcd=-1;
int gcd=0;
for(int i=0;i<vinput.size();i++)
{
    for(int j=i+1;j<vinput.size();j++)
    {
       gcd=GCD(vinput[i],vinput[j]);
       if(gcd>maxgcd)
        maxgcd=gcd;
    }
}
cout<<maxgcd<<endl;

    }
}
void convertIntoInteger(string input)
{
    int sum=0;
    int n=input.length();
    for(int i=0;i<n;i++)
    {
        if(input[i]!=' ')
        {
            sum=sum*10+(input[i]-'0');
        }
         if(input[i]==' '||i==n-1)
        {
           vinput.push_back(sum);
           sum=0;
        }
    }
}
int GCD(int a,int b)
{
    if(a==0)return b;
    return GCD(b%a,a);
}
