#include<bits/stdc++.h>
using namespace std;

int main(){

	//n in time complexity is map size
	map<int,string>m;
	m[1]="abc";//it takes O(log(n)) time for just this one task 
	// and similarly if we want  to acces ie it.first it also takes O(log(n)) time
	m[2]="abcd";//by default if initialised ie m[1]; thenn it value will be assigned 0 or "" according to the type of value
	m[4]="abcde";
	m.insert({3,"abcdef"});
	map<int,string> :: iterator it;
	for(it=m.begin();it!=m.end();++it){//so this takes O(n*O(log(n))) time as access karne ka time bhi map ko ie it.first is O(logN)
	//m.end is pointing toward the next element of the last element
		// cout<<(*it).first<<" "<<(*it).second;
		//or we can also do 
		cout<<it->first<<" "<<it->second<<endl;
		//all keys are printed in sorted order
		//focus on keys only

	}
	auto it1=m.find(2);//O(log(n))
	//it rreturns iterator of 2  and if that key is not present then  it will return m.end ie last element iterator ke agla iterator
	if(it1==m.end()){
		cout<<"No value";
	}else{
		cout<<it1->first<<" "<<it1->second<<endl;

	}
	//way 1 to erase using key and other using iterator
	m.erase(1);//o(log(n)) time complexity
	m.erase(it1);

	// m.clear() //ye pura map clear kar dega ie khali 

 
	return 0;
}