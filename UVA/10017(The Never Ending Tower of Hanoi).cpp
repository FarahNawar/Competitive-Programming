#include<bits/stdc++.h>
using namespace std;
vector<int>peg[3];
int Count, m;
void TOH(int n, int beg, int aux, int End);
void print();
int main()
{
    int n, t=1;
    while (2)
    {
        cin>>n>>m;
        if(n==0&&m==0)
            break;
        cout<<"Problem #"<<t<<endl;
        t++;
        Count=0;
        int beg=0;
        int aux=1;
        int End=2;
        for (int i = n; i; i--)
            peg[beg].push_back(i);
        print();
        TOH(n, beg,aux,End);
        for (int i = 0; i < 3; i++)
            peg[i].clear();
        cout<<endl;
    }
}
void TOH(int n, int beg, int aux, int End)
{
    if (Count == m)
        return;
    if (n == 1)
    {
        Count++;
        int x=peg[beg].back();
        peg[End].push_back(x);
        peg[beg].pop_back();
        print();
    }
    else
    {
        TOH(n - 1, beg,End, aux);
        if (Count == m)
            return;
        Count++;
        int x=peg[beg].back();
        peg[End].push_back(x);
        peg[beg].pop_back();
        print();
        TOH(n - 1, aux,beg, End);
    }
}
void print()
{
    cout<<endl;
        cout<<"A=>";
        if (!peg[0].empty())
        {
            cout<<"   ";
            for (int j = 0; j < peg[0].size() - 1; j++)
                cout<<peg[0][j]<<" ";
          cout<<peg[0].back();
        }
        cout<<endl;
        cout<<"B=>";
        if (!peg[1].empty())
        {
            cout<<"   ";
            for (int j = 0; j < peg[1].size() - 1; j++)
                cout<<peg[1][j]<<" ";
          cout<<peg[1].back();
        }
        cout<<endl;
        cout<<"C=>";
        if (!peg[2].empty())
        {
            cout<<"   ";
            for (int j = 0; j < peg[2].size() - 1; j++)
                cout<<peg[2][j]<<" ";
          cout<<peg[2].back();
        }
        cout<<endl;

}
