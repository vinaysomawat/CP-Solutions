#include<bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(int i=a; i<b;i++)
using namespace std;

void solve2(vector<int> b, int n)
{
    stack<int> s;
    s.push(b[0]);
    for(int i=1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(b[i]);
        }
        while(!s.empty() && b[i]>s.top())
        {
            cout<<b[i]<<" ";
            s.pop();
        }

        s.push(b[i]);
    }

    if(!s.empty())
    {
        cout<<"-1 ";
    }
    cout<<endl;
}

void sol(int a[], int n)
{
    stack<int> s;
    s.push(a[0]);
    vector<int> b;
    for(int i=1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(a[i]);
        }
        while(!s.empty() && a[i]<s.top())
        {
            b.push_back(a[i]);
            s.pop();
        }

        s.push(a[i]);
    }

    solve2(b,b.size());
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    f(i,0,n){
    cin>>a[i];
    }
    sol(a,n);
    return 0;
}