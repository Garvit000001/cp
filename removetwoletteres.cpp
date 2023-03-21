#include  <iostream>
#include<cctype>
#include<queue>
#include<unordered_map>

using namespace std;
#define int long long 
int poweringhero(int &i,int j,stack<int> &st,stack<int> &st1,int army){
	//base case





	//recursive case
	int a=st.top();
	if(a>0){
		st.pop();
	poweringhero(i++,st,st1,army);
	st1.push();
	poweringhero(i++,st,st1,army);

	}
	else{
		army+=st1.top();
		st1.pop();

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
	string s;
	cin>>s;
	stack<int> st;
	for(int i=n-1;i>=0;i++){
		st.push();
	}
	stack<int> s1;
	int army=0;

	cout<<poweringhero(0,0,st,army);

	
}

return 0;

}