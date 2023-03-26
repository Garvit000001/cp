#include<bits/stdc++.h>
using namespace std;
int main(){
	//it acts like stack as it has top pop and push empty size method

	//max heap
	priority_queue<int> maxi;

	//min heap
	priority_queue<int,vector<int>,greater<int > > mini;

	maxi.push(1);
	maxi.push(2);
	maxi.push(3);
	maxi.push(4);

	int n=maxi.size();//if in below loop n ki jagah maxi.size() likhunga toh wrong ans aega as maxi.pop() kar rhe hai so size is changing 
	for(int i=0;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<endl;

	mini.push(4);
	mini.push(2);
	mini.push(5);
	mini.push(1);
	mini.push(3);
	int n1=mini.size();
	for(int i=0;i<n1;i++){
		cout<<mini.top()<<" ";
		mini.pop();
	}


	return 0;
}