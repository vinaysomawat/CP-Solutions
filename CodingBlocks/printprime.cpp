#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	int f=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
		}
	}
	if(f==0)
	{
		return n;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			cout<<i<<endl;
		}
	}
	return 0;
}