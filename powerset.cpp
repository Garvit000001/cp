#include<iostream>
#include<vector>
using namespace std;
void powerset(int* arr,int n){
    
    vector<vector<int> > v;
    for(int num=0;num<(1<<n);num++){
        vector<int> sub;
        for(int i=0;i<n;i++){
            if((num & (1<<i))==1){//that set bit is 1 so push in sub
            sub.push_back(arr[i]);
            }
            v.push_back(sub);
        }

    }
   for(int i=0;i<v.size();i++){
    cout << v.pop_back()<<" ";
   }

}
//time complexity->( 2^n) *n ,where n can be only  n<=18 

int main(){
    int arr[3]={3,-4,5};
    powerset(arr,3);
    

    return 0;

}