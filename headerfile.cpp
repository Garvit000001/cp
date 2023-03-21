//in binary search we take range of ans jo nikalna h fir uspe bs lgatwe hai and 
//maximum range we get when we use smalest constraint  and similarly for minimum range also 

#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int N=1000006;
int seive[10000005];
int fact[100005];
int powerr[100005];

void sqrt(){
    int n;
    cin>>n;
    int ans=1;
    int low=1;int high=n>>1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(mid*mid<=n){
            low=mid+1;
             ans=mid;
        }else{
            high=mid-1;
        }
    }
    cout<<ans;
}
int bspower(int base,int n,int mod){
    int ans=1;
    while(n!=0){
        if(n%2){
            ans=(ans*base)%mod;
            n=n-1;
        }
        else{
            n=n>>1;
            base=(base*base)%mod;
        }

    }
    return ans;

}
void preComputeFactorial(){
    fact[0]=1;
    int ans=1;
    for(int i=1;i<=100005;i++){
        ans=ans*i;
        fact[i]=ans;
        powerr[i]=bspower(fact[i],mod-2,mod);
    }

}
int nCr(int n,int r){
    return (fact[n]*(powerr[r]*powerr[n-r])%mod)%mod;

}
void createseive(){
    //marks 2 to N as 1
    for(int i=2;i<N;i++){
        seive[i]=1;
    }

    for(int i=2;i*i<=N;i++){

        //mark all multiples of i if seive[i]==1
        if(seive[i]==1){
            for(int j=i*i;j<=N;j=j+i){
                seive[j]=0;
            }
        }
    }
    
}
void createseiveforprimefactor(){
    int N=1000000;
    //step1
    //assume every no.minimal primeno. is no. itself
    for(int i=0;i<N;i++) seive[i]=i;
    //step 2
    for(int i=2;i*i<N;i++){
        //mark all multiples of i
        if(seive[i]==i){
            //if seive[i]=i that means it is a prime no and we have to take
            // multiple of it
            //mark all multiples of i ie of prime no.
            for(int j=i*i;j<=N;j=j+i){
                if(seive[j]==j){
                    seive[j]=i;
                }
            }

        }
    }
}
void testCasesNcR(){
    preComputeFactorial();
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        cout<<nCr(n,r)<<endl;
    }
}
int gcd(int a,int b){
    //base case
    if(b==0){
        return a;
    }

    //recursive case
    return gcd(b,a%b);
}

signed main(){//signed main is used as large no are used and -ve and +ve both no. 
//are use so signed int ->written as signed

    cout<<gcd(16,12);
    

    return 0;

}