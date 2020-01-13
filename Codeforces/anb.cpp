#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a>b)
		{
			swap(a,b);
		}
	}
	return 0;
}