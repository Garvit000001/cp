#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
	for(auto it : s){
		cout<<it<<endl;
	}

	// for(auto it=s.begin();it!=s.end();++it){
	// 	cout<<(*it)<<endl;
	// }
}
int main(){
	//in multiset it is implemented usin red black tree
	// it takes O(logn) time just like set

	multiset<string> s;// tc -> O(1) same as unordered_map
	s.insert("abc");
	s.insert("abcd");
	s.insert("abcde");
	s.insert("abc");
	s.insert("abcd");

	//in map two ways to access the elment m[] or m.find
	//but in set only there is one way s.find()
	auto it=s.find("abc");//O(1)
	if(it!=s.end()){
		// cout<<(*it)<<endl;
		s.erase(it);//can take iterator and stirng as input so both ways
		// it erases only one abc in multiset

	}
	s.erase("abcd");//erase both abcd  difference in both ways of erasing in multiset
	
	print(s);




	return 0;
}