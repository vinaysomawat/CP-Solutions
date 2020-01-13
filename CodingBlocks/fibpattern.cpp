#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int fib[100000];
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=10000;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	int x=0;
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<fib[x]<<" ";
			x++;
		}
		cout<<endl;
	}
}