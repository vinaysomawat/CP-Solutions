#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a[t][2*t-1];
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<2*t-1;j++)
		{
			a[i][j]=0;
		}
	}
	int k=0,p;
	for(int i=0;i<t;i++)
	{
		p=i+1;
		for(int j=t-k;j<=t;j++)
		{
			a[i][j]=p;
			p++;
		}
		p--;
		p--;
		for(int j=t+1;j<=t+k;j++)
		{
			a[i][j]=p;
			p--;
		}
		k++;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<=2*t-1;j++)
		{
			if(a[i][j]!=0)
			{
				cout<<a[i][j]<<" ";
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}