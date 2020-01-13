#include<bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  {
    	int num = stoi(a);
    	cout<<a<<endl;
    	if(num%60==0)
    	{
    		cout<<"red"<<endl;
    	}
    } 
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string str = to_string(n);
		int l = str.length();
		vector<int> v;
		permute(str, 0, l-1);
		//cout<<v.size()<<endl;
	}
}