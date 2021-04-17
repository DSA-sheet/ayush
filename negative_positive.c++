#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> arr={-2,1,-5,4,4,8,5,-9,-4,-5,6};
	
	int s=0,e=arr.size()-1;
	
	while(s<e)
	{
	     if(arr[s]<0 && arr[e]>0)
	    {
	        s++;
	        e--;
	    }
	    else if(arr[s]>0 && arr[e]<0)
	    {
	        swap(arr[s],arr[e]);
	        s++;e--;
	    }
	    else if(arr[s]>0 && arr[e]>0)
	    {
	        e--;
	    }
	    else if(arr[s]<0 && arr[e]<0)
	    {
	        s++;
	    }
	
	    
	}
	
	for(int i=0;i<arr.size();i++)
	{
	    cout<<arr[i]<<" ";
	}
	   
	
	return 0;
}
