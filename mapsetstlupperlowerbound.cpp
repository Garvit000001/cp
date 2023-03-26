#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	set<int> s;
	map<int,int> m;//upperbound and lowerbound in map case sirf key p lagta hai 
	for(inti i=0;i<(int)(1e6);i++){
		s.insert(rand());
	}
	for(int i=0;i<(int)(1e6);i++){
		auto it=s.lower_bound(rand());//O(logn) function tc

	}

	return 0;
}