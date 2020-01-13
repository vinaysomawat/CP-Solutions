#include<bits/stdc++.h>
using namespace std;

// int modInverse(int a, int m) 
// { 
//     a = a%m; 
//     for (int x=1; x<m; x++) 
//        if ((a*x) % m == 1) 
//           return x; 
// } 

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v1;
	vector<int> v2;
	int t;
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
	sort(v2.begin(), v2.end());
	vector<int> v3;
	int k=1;
	int flag=0;
	while(k<=m)
	{
		int f=0;
		for(int i=0;i<n;i++)
		{
			v3.push_back((v1[i]+k)%m);
			// cout<<"push: "<<(v1[i]+k)%m<<endl;
		}
		sort(v3.begin(), v3.end());
		for(int i=0; i<n; i++)
		{
			if(v2[i]!=v3[i])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<k<<endl;
			flag=1;
			break;
		}
		k++;
	}
	if(flag==0)
	{
		cout<<"0"<<endl;
	}
	return 0;
}