#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m)
{
    int count=0;
    if(n==m)
    {
        return count;
    }
    int diff =n-m;
    if(diff<0 && diff%2!=0)
    {
        return 1;
    }
    if(diff>0 && diff%2==0)
    {
        return 1;
    }
    else 
    return 2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}