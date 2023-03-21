#include<iostream>
#include<vector>
using namespace std;
int arr[5]={1,5,3,2,4};
int n=5;
//whenver you have to pick elements from array and find combinations then we use this trick
void pickNotpick(int i,int sum,vector<int> &ds){
    //base case
    if(i==n){
        if(sum==0){
            for(auto it: ds){
                cout<<it<< " ";
            }
            cout<<endl;
        }
        return;
        
    }


    //recursive case
    //pick condition only if a[i]<=sum
    if(arr[i]<=sum){
        ds.push_back(arr[i]);
        pickNotpick(i+1,sum-arr[i],ds);
        ds.pop_back();
    }
    //not pick
    pickNotpick(i+1,sum,ds);


}

int main(){
    vector<int > ds;
    pickNotpick(0,6,ds);
    

    return 0;

}