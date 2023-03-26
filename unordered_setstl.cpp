//same difference jo map and unordered_map m tha vhi set or unordered_set m hota hai ie datatype pair nhi rkh sakte in unordered_set
//it shoudl be used when we need t\o chekck if the stirng is present or not just in that case it is helpful
//sets are collection of unique elements
//its implemenetation is done using hash function
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
	unordered_set<string> s;// tc -> O(1) same as unordered_map
	s.insert("abc");
	s.insert("abcd");
	s.insert("abcde");

	//in map two ways to access the elment m[] or m.find
	//but in set only there is one way s.find()
	auto it=s.find("abc");//O(1)
	if(it!=s.end()){
		cout<<(*it)<<endl;
		s.erase(it);//can take iterator and stirng as input so both ways

	}
	s.erase("abcd");
	
	print(s);







	return 0;
}