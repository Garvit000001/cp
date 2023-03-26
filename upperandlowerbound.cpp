#include<bits/stdc++.h>
using namespace std;
int main(){
	//for using these first data should be sorted then tc-> O(logn)
	//otherwise tc->O(n) in  maps and set case so we can do for them in different way
	//these both return location or iterator ie pointer
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	} 
	sort(a,a+n);
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	//lowerbound-> if we have to find 7 then if it is present in arr then it will find 7 location otherwise it will find 8 ie nge location
	//lower_bound(a,a+n,5)
	int* ptr=lower_bound(a,a+n,5);
	cout<<(*ptr)<<endl;


	//upperbound-> if we have to find 7 upperbound then it wil give me 8 ie nge location
	int* ptr1=upper_bound(a,a+n,5);//a is address of first bucket of arrray
	cout<<(*ptr1)<<endl;



	return 0;
}