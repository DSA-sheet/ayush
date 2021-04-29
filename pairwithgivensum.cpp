int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++) hash[arr[i]]++;
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=hash[k-arr[i]];
            if(k-arr[i]==arr[i]) res--;
        }
        
        return res/2;
        
    }