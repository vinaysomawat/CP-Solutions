#include<bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(int i=a; i<b;i++)
using namespace std;

void sol(int a[], int n)
{
    stack<int> s;
    s.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(a[i]);
        }
        while(!s.empty() && a[i]>s.top())
        {
            cout<<a[i]<<" ";
            s.pop();
        }

        s.push(a[i]);
    }

    if(!s.empty())
    {
        cout<<"-1 ";
    }
    cout<<endl;
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