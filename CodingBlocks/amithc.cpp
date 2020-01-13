#include<bits/stdc++.h>
using namespace std;

long long int fn(int a[], int size)
{
	int sum=1;
	for(int i=0;i<size;i++)
	{
		sum = (sum*a[i])%1000000007;
	}
	return sum;
}
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long sumfn = fn(a,n);
	long long gcd = findGCD(a,n);
	//cout<<sumfn<<" "<<gcd<<endl;
	long long final = pow(sumfn,gcd);
	final = final%1000000007;
	cout<<final<<endl;
	return 0;
}