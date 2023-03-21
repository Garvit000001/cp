#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,int> p;
	//1st way
	p=make_pair(2,3);
	cout<<p.first<<" "<<p.second<<endl;
	//2nd way
	pair<int,int> p1;
	p1={10,4};
	cout<<p1.first<<" "<<p1.second<<endl;


	pair<int,int> p2=p1;//copy ho gyi values
	p2.first=3;
	cout<<p2.first<<" "<<p2.second<<endl;

	//pair are used to maintain relation between two things 
	int arr[3]={1,2,3};
	int arr1[3]={4,5,6};
	//array kisi bhi cheez ko bnane ke liye kya karte hain
	// []ye bracket add kar dete hai after name
	//for eg int b[] similarly done here
	pair<int,int> p_array[3];
	p_array[0]={1,4};
	p_array[1]={2,4};
	p_array[2]={3,6};
	for(auto it:p_array){
		cout<<it.first<<" "<<it.second<<endl;
	}


 
	return 0;
}