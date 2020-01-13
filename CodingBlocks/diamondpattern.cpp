#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a[t][t];
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			a[i][j]=0;
		}
	}
	int k=1;
	for(int i=t/2;i>0;i--)
	{
		for(int j=k;j<t-k;j++)
		{
			a[i][j]=1;
		}
		k++;
	}
	k=2;
	for(int i=t/2+1;i<t;i++)
	{
		for(int j=k;j<t-k;j++)
		{
			a[i][j]=1;
		}
		k++;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			if(a[i][j]==0)
			{
				cout<<"*"<<" ";
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}