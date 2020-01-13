#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int l=str.length();
		int j=0;
		char op;
		string first;
		string second;
		for(int i=0;i<l;i++)
		{
			//cout<<"i: "<<i<<endl;
			if(str[i]=='+' || str[i]=='-' || str[i]=='*')
			{
				op=str[i];
				j=i+1;
				break;
			}
			else
			{
				first+=str[i];
			}
		}
		for(int i=j;i<l;i++)
		{
			//cout<<"i: "<<i<<endl;
			second+=str[i];
		}
		stringstream geekfirst(first);
		stringstream geeksecond(second);
		int num1;
		int num2;
		geekfirst>>num1;
		geeksecond>>num2;
		//cout<<num1<<" "<<num2<<endl;
		switch(op)
		{
			case '+':
			{
				cout<<" "<<num1<<endl;
				cout<<"+"<<num2<<endl;
				cout<<"-------------"<<endl;
				cout<<" "<<num1+num2<<endl;
				break;
			}
			case '-':
			{
				cout<<" "<<num1<<endl;
				cout<<"-"<<num2<<endl;
				cout<<"-------------"<<endl;
				cout<<" "<<num1-num2<<endl;
				break;
			}
			case '*':
			{
				cout<<" "<<num1<<endl;
				cout<<"*"<<num2<<endl;
				cout<<"--------------"<<endl;
				int l = second.length();
				cout<<"l: "<<l<<endl;
				for(int i=0;i<l;i++)
				{
					//cout<<"sec[i] :"<<second[l-i-1]<<endl;
					int p = second[l-i-1]-'0';
					//cout<<"p: "<<p<<endl;
					cout<<num1*p<<endl;
				}
				cout<<"--------------"<<endl;
				cout<<num1*num2<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}