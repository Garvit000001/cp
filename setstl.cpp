//sets are collection of unique elements
//its implemenetation is als done using red black trees
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
	for(auto it : s){
		cout<<it<<endl;
	}

	for(auto it=s.begin();it!=s.end();++it){
		cout<<(*it)<<endl;
	}
}
int main(){
	set<string> s;//stores in sorted order and tc -> O(logn) same as map
	s.insert("abc");
	s.insert("abcd");
	s.insert("abcde");

	//in map two ways to access the elment m[] or m.find
	//but in set only there is one way s.find()
	auto it=s.find("abc");//O(logN)
	if(it!=s.end()){
		cout<<(*it)<<endl;
		s.erase(it);//can take iterator and stirng as input so both ways

	}
	s.erase("abcd");
	
	print(s);







	return 0;
}