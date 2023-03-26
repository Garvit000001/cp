#include<iostream>
#include<map>
using namespace std;
string str="abc";
int n=str.length();
void printPermutations(int ind,string s,map<int,int> &mpp){
    //we can also take map<char,int> &mpp as we want to know mpp[a]=1 ie a use hua h ya b ya c
    //we have implemented it using int only mpp[0]=1 also str[0]=a so we were able to 
    //implement to it easily
    //base case
    if(ind==n){
        cout<<s<<endl;

    }
    //recursive case
    for(int i=0;i<n;i++){
        if(mpp[i]==0){
            mpp[i]=1;
            s+=str[i];//str string h jiska permutation karna h
            printPermutations(ind+1,s,mpp);
            mpp[i]=0;
            s.pop_back();

        }
    }


}

int main(){
    string s="";
    map<int,int> mpp;
    printPermutations(0,s,mpp);
    

    return 0;

}