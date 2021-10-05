#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        int start=0,end=0,curr=0;
        vector<int> ans;
        while(end<=n ){
            if(curr==sum){
                ans.push_back(start+1);
                ans.push_back(end);
                return ans;
                
            }
            if(start==end or curr<sum){
                curr+=arr[end];
                end++;
            }
            else{
                start++;
                curr-=arr[start-1];
            }
        }
        ans.push_back(-1);
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends