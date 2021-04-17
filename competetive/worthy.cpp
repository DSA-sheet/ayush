#include<iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;


int main(){
    ll t; cin>>t;
    while(t--){
    ll n,m,k; 
    cin>>n>>m>>k;
    
    ll array[n+1][m+1];
    memset(array,0,sizeof(array));
    
    
    for(ll f=1;f<=n;f++){
        for(ll v=1;v<=m;v++){
            cin>>array[f][v];
        }
    }
    
    for(ll f=1;f<=n;f++){
        for(ll v=1;v<=m;v++){
            array[f][v]+=array[f][v-1];
        }
    }
    for(ll v=1;v<=m;v++){
        for(ll f=1;f<=n;f++){
            array[f][v]+=array[f-1][v];
        }
    }
    ll ans=0;
    for(ll z=1;z<=n;z++){
       for(ll f=1;f<=n-z+1;f++){
    	ll l=1, h=m-z+1, b;
    	ll p;
    	ll s=0;
    	
    	while(l<=h){
    		b=(l+h)/2;
    		ll sum=array[f+z-1][b+z-1]-array[f+z-1][b-1]-array[f-1][b+z-1]+array[f-1][b-1];
    		if(sum >= k*z*z){
    			h=b-1;
    			p=b; s=1;
    		}
    		else
    			l=b+1;
    	}
    	if(s==1)
    	    ans+=(m-z-p + 2);
    }
    }
    
    cout<<ans<<endl;
}
return 0;
}