#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t  main(){

	
	int n;
	int k;
	cin>>n;
	cin>>k;
	vector<int> required(n);
	for(int i=0;i<n;i++){
		cin>>required[i];
	}
	vector<int> has(n);
	for(int i=0;i<n;i++){
		cin>>has[i];
	}
	int low=0;
	int high=1e14;
	int ans=0;
	while(low<=high){
		int mid=low+((high-low)/2);		
		
		int z=0;
		int cost=0;
		for(int i=0;i<n;i++){
			cost=cost+max((required[i]*mid)-has[i],z);
			
		}
		
		
		if(cost<=k){
			low=mid+1;
			ans=mid;
		}
		else{
			high=mid-1;
		}
	}
	cout<<high;

	return 0;
}