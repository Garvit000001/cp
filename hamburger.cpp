#include  <bits/stdc++.h>
using namespace std;
#define int long long 


int32_t  main(){

	string s1;
	cin>>s1;
	int nb,ns,nc;
	cin>>nb>>ns>>nc;
	int pb,ps,pc;
	cin>>pb>>ps>>pc;
	int r;
	cin>>r;
	int low=0;
	int high=r+200;
	int b=0;
	int s=0;
	int c=0;//where a ,b,c are b,s,c in stirngs needed
	int ans=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='B') b++;
		if(s1[i]=='S') s++;
		if(s1[i]=='C') c++;
	}

	while(low<=high){
		//mid denotes the no,. of hamburgers we can make 
		int z=0;//ie agar rb ki value -ve ho toh we have to take 0 for them and not -ve value
		int mid=low+((high-low)/2);
		int rb=max(mid*b-nb,z);
		int rs=max(mid*s-ns,z);
		int rc=max(mid*c-nc,z);
		//rr->required rubles
        int rr=pb*rb+ps*rs+pc*rc;
        if(rr<=r){
        	low=mid+1;
        	 ans=mid;

        }
        else{
        	high=mid-1;
        }
	}
	cout<<high;

	return 0;

}