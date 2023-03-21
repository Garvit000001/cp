#include<bits/stdc++.h>
using namespace std;
#define int long long
int lameking(int r,int c,int spi,int spj,int &min,int i,int j){
	//base case
	if(i==spi && j==spj){

	}

	//recursive case
	int opt0=1+lameking(r,c,i,j);
	
	int opt1=1+lameking(r+1,c,spi,spj,min,i,j);//go up
	int opt2=1+lameking(r-1,c,spi,spj,min,i,j);//go down
	int opt3=1+lameking(r,c+1,spi,spj,min,i,j);//go right
	int opt4=1+lameking(r,c-1,spi,spj,min,i,j);//go left




}


int32_t  main(){
	int t;
	cin>>t;
	while(t--){
		int r;
		int c;
		cin>>r>>c;
		int i=0;
		int j=0;
		int min=INT_MIN;

		cout<<lameking(r,c,0,0,min);

	}

	
 

	return 0;
}