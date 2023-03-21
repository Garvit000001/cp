#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
	for(int i=0;i<v.size();i++){//v.size()->O(1)
		cout<<v[i]<<" ";
	}
}
int main(){
	//it will create vector of size 10 all initialised by 0
	vector<int >v(10);
	v.push_back(7);//O(1)
	printvec(v);
	cout<<endl;

	//it will create vector of size 10 all initialised by 3
	vector<int >v1(10,3);
	printvec(v1);
	cout<<endl;
	//it will create vector of size 10 all initialised by 5
	vector<int >v2(10,5);
	v2.pop_back();//O(1)
	printvec(v2);
	cout<<endl;
//so this is exact copy
	vector<int> v4=v;// TC-> O(n)
	v4.push_back(5);
	v4.push_back(58);
	v4.push_back(9);
	v4.push_back(10);
	printvec(v4);
	//vector do not act as arr ie like internal poin ter

	vector<pair<int,int>>  vp;

 
	return 0;
}