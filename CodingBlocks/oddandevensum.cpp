//sum of odd and even places


#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	long long sum1=0,sum2=0;
	int f=0;
	while(t>9)
	{
		if(f==0)
		{
			sum1+=t%10;
			t=t/10;
			f=1;
		}
		else 
		{
			sum2+=t%10;
			t=t/10;
			f=0;
		}
	}
	if(f==1)
	{
		sum2+=t;
	}
	else
	{
		sum1+=t;
	}
	cout<<sum1<<" "<<sum2<<endl;
	return 0;
}