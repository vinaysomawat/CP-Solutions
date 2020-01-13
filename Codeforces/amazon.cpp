#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string a,b;
		cin>>a>>b;
		for(int i=0;i<a.length();i++)
		{
			int c=i;
			for(int j=a.length()-1; j>i;j--)
			{
				if(a[j]<a[c])
				{
					c=j;
				}
			}
			if(c!=i)
			{
				swap(a[c],a[i]);
				break;
			}
		}
		if(a<b)
		{
			cout<<a<<endl;
		}
		else
			cout<<"---"<<endl;
	}
	return 0;
}