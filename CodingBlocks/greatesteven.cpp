#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str = to_string(n);
	reverse(str.begin(), str.end());
	vector<int> v;
	int f=0;
	for(int i=0;i<str.length();i++)
	{
		v.push_back(str[i]-'0');
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]%2==0)
		{
			//cout<<v[i]<<endl;
			swap(v[i], v[v.size()-1]);
			f=1;
			break;
		}
	}
	reverse(v.begin(),v.end());
	int num=0;
	for(int i=0;i<v.size();i++)
	{
		num +=v[i];
		num*=10;
	}
	num= num/10;
	cout<<num<<endl;
}