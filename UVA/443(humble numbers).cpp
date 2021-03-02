#include<bits/stdc++.h>
using namespace std;
int main(){
    int humble[5842];
    int n;
    int pos2,pos3,pos5,pos7;
    pos2=0;
    pos3=0;
    pos5=0;
    pos7=0;
    humble[0]=1;

    for(int i=1;i<5842;i++){
        humble[i]=min(min(2*humble[pos2],3*humble[pos3]),min(5*humble[pos5],7*humble[pos7]));

        if(humble[i]==2*humble[pos2]) pos2++;
        if(humble[i]==3*humble[pos3]) pos3++;
        if(humble[i]==5*humble[pos5]) pos5++;
        if(humble[i]==7*humble[pos7]) pos7++;
    }

    while(1){
        cin>>n;
        if(n==0) break;

        cout<<"The "<<n;

        if(n%10==1 && (n/10)%10!=1) cout<<"st";
        else if(n%10==2 && (n/10)%10!=1) cout<<"nd";
        else if(n%10==3 && (n/10)%10!=1) cout<<"rd";
        else cout<<"th";

        printf(" humble number is %d.\n",humble[n-1]);
    }

    return 0;
}
