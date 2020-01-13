#include <bits/stdc++.h> 
using namespace std; 
  
bool isPrime(long int n) 
{ 
    if (n <= 1) 
        return false;
    else if (n ==2)
    	return true;
    else if (n % 2 ==0)
    	return false; 
  
    else
    {
        bool prime = true;
        int divisor = 3;
      
        int upperLimit =sqrt(n) +1;
        
        while (divisor <= upperLimit)
        {
            if (n % divisor == 0)
                return false;
            divisor +=2;
        }
        return prime;
    }
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m>>n;
    	for(int i=m;i<=n;i++)
    	{
    		if(isPrime(i))
    		{
    			cout<<i<<endl;
    		}
    	}	
    }
    return 0;
} 