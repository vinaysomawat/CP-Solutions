#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string strt;
		cin>>strt;
		reverse(strt.begin(), strt.end());
		string str = strt.substr(0,5);
		string str1 = "op";
		string str2 = "used";
		string str3 = "usam"; 
		string str4 = "adinm";
		size_t found = str.find(str1);
		size_t found1 = str.find(str2);
		size_t found2 = str.find(str3);
		size_t found3 = str.find(str4);
		if(found!=string::npos)
		{
			cout<<"FILIPINO"<<endl;
		}
		if(found1!=string::npos || found2!=string::npos)
		{
			cout<<"JAPANESE"<<endl;
		}
		if(found3!=string::npos)
		{
			cout<<"KOREAN"<<endl;
		}
	}
}