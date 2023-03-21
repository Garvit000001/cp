#include<iostream>
#include<vector>
using namespace std;
//print all combinations that sum up to N
void printCombo(int n,vector<int> v){
    //base case
    if(n==0){
        for(auto it:v){
            cout<<it<< " ";
        }
        cout<<endl;
        return;
    }

    //recursive case
    for(int i=1;i<=n;i++){
        v.push_back(i);
        printCombo(n-i,v);
        v.pop_back();
    }


}

int main(){
    vector<int > v;
    printCombo(5,v);
    

    return 0;

}