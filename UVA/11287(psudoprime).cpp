#include<bits/stdc++.h>
using namespace std;
const int n=1000000;
int Prime[n+1],mark[1000005];

//Function for finding the primes up to 1000000
void sieve()
{
    int i, j, limit = sqrt(n*1)+2;
    mark[1] = 1;
    for(i=4 ;i<=n ;i+=2) mark[i] = 1;
    Prime[1]=2;
    for(i=3 ;i<=n ;i+=2)
        if(mark[i]==0)
        {
            Prime[i-1] = i;
            if(i <= limit)
                for(j=i*i ;j<=n ;j+=i*2)
                    mark[j]=1;
        }
}

//Function for reversing the prime number
int reverse_of_prime(int val_1)
{
    int num=0;
    while(val_1){
        num=num*10+val_1%10;
        val_1=val_1/10;
    }
    return num;
}

//Driver function for starting the program
int main()
{
    sieve();
    int val;
    while(cin>>val){
        int rev_val=reverse_of_prime(val);
        if(!Prime[val-1]) cout<<val<<" is not prime."<<endl;
        else if(Prime[val-1] and Prime[rev_val-1] and val!=rev_val) cout<<val<<" is emirp."<<endl;
        else cout<<val<<" is prime."<<endl;
    }
    return 0;
}
