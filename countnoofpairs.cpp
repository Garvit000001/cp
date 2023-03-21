#include  <iostream>
#include<cctype>
#include<queue>
#include<unordered_map>

using namespace std;
#define int long long 
pairs(int n,int k,string s){
	unordered_map<char,int> h;
	int count=0;


	for(int i=0;i<n;i++){
		h[i]++;
}
for(auto it:h){
	if(h[it.first]!=0 && h[it.first-32]!=0){
		h[it.first-32]--;
		h[it.first]--;
		count++;
	}
	else if(h[it.first]!=0 && h[it.first+32]!=0){
		h[it.first+32]--;
		h[it.first]--;
		count++;
	}
	
}


int32_t  main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	#endif




int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int k;
	cin>>k;
	string s;
	cin>>s;
	pairs(n,k,s);

	
}

return 0;

}