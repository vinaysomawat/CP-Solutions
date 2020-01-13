#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		sort(s1.begin(), s1.end());
		int l1=s1.length();
		int l2=s2.length();
		int start=0;
		int f=0;
		while(start+l1<=l2)
		{
			string str = s2.substr(start, l1);
			string temp=str;
			sort(temp.begin(), temp.end());
			//cout<<temp<<" "<<s1<<endl;
			if(temp==s1)
			{
				f=1;
				break;
			}
			start++;
		}
		if(f==1)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}