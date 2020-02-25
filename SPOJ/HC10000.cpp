#include<bits/stdc++.h>
#define ll long long
using namespace std;

void f(int n)
{
    int a[100001];
    a[1]=1;a[2]=1;
    for(int i=3;i<=n;i++)
    {
        // int p = a[i-1];
        a[i] = a[a[i-1]] + a[i-a[i-1]];
    }
    int dp[1000001];
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        dp[i] = sum;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<dp[i]<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        f(n);
    }
    return 0;
}