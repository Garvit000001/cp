#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t  main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int ans=0;
	int low=0;
	int high=n-1;
	int pipes;
	while(low<=high){
		int mid=low+((high-low)>>1);
			pipes=(mid*k)-(mid-1);
		if(pipes>=n){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1; 
		}

	}
	// if(((low*k)-(low-1))==n){
	// 	cout<<low;
	// }
	// else{
	// 	cout<<"-1";
	// }
	cout<<low;
	
	
 

	return 0;
}