#include<iostream>
using namespace std;
int seive[1000000];
int freq[1000000];//when we create arr globally it gets initiallised by 0 every bucket
void createseiveforashutocountMPF(int t){
    int n=1000000;
    //step 1 mark 2 to 10^6 as 1
    for(int i=2;i<n;i++){
        seive[i]=1;
    }

    //now jo multiples katenge khud ba khud bo hi toh minimum prime factor honege us
    //respective i index ke liye very simple to understand
    for(int i=2;i*i<=n;i++){
        freq[i]++;
        if(seive[i]==1){
            for(int j=i*i;j<=n;j=j+i){
                seive[j]=0;
                freq[i]++;
            }
        }
    }
    while(t--){
        int n;
        cin>>n;
        cout<<freq[n]<<endl;
    }



}
void primecheck(){
    int t;
    cin>>t;
    createseiveforashutocountMPF(t);
}

int main(){
    primecheck();

    return 0;

}