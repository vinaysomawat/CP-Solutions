#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,t;
		cin>>n;
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			v1.push_back(t);
		}
		for(int i=0;i<n;i++)
		{
			cin>>t;
			v2.push_back(t);
		}
		reverse(v2.begin(), v2.end());
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			cout<<v1[i]<<" "<<v2[i]<<" "<<i<<endl;
			if(v1[i]==v2[i])
			{
				cnt+=2;
			}
		}
		cout<<cnt<<endl;
	}
}