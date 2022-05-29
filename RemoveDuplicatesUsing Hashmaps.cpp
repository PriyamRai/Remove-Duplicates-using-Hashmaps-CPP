#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std ;


vector<int> removeduplicates(int * arr , int n) {
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
            if(mp.count(arr[i])>0){
                continue;
            }
        mp[arr[i]] ++;
        v.push_back(arr[i]) ;
    }
    return v ;



}

int main(){

    int a[]={1,2,2,3,4,4,3,2,1,5,6,7,8,6,7,8};
    vector<int> output=removeduplicates(a,16);
    cout<<"Output: "<<endl;
    for(int i=0;i<8;i++){
        cout<<output[i]<<" ";
    }



}



