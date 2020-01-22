#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll checkmax(ll a,ll b, ll c)
{
    return max(a,max(b,c));
}

ll check(ll n, ll sum)
{
    n-=sum;
    if(n<0)
    {
        return 0;
    }
    if(n%3==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll mxtemp = checkmax(a,b,c);
        ll sum=0;
        sum=3*mxtemp-a-b-c;
        if(check(n,sum))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}