#include<bits/stdc++.h>
using namespace std;

int main()
{
	int rows=6,cols=6;
	fstream matrix("matrix.txt", ios::in);
	int arr[rows][cols];
	int shortpath[rows][cols]= {0};
    for (int i = 0; i < rows; i++)
    {
   	    for (int j = 0; j < cols; j++)
   	    {
   	        matrix >> arr[i][j];
   	        cout << arr[i][j] << " ";
   	    }
		cout << endl;
    }
    shortpath[0][0] = arr[0][0];
    for (int j = 0; j < cols; j++)
    {
   	    shortpath[0][j+1]  =arr[0][j+1] + shortpath[0][j];
    }
    for (int i = 0; i < rows; i++)
    {
   	    shortpath[i+1][0]  =arr[i+1][0] + shortpath[i][0];
    }
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<cols;j++)
    	{
    		shortpath[i+1][j+1] = min(shortpath[i][j+1], shortpath[i+1][j]) + arr[i+1][j+1];
    	}
    }
    cout<<"After: "<<endl;
    for (int i = 0; i < rows; i++)
    {
   	    for (int j = 0; j < cols; j++)
   	    {
   	        cout << shortpath[i][j] << " ";
   	    }
		cout << endl;
    }
	return 0;
}