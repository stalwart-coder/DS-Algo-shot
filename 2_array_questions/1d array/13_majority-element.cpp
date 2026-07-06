#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,int>mpp;
    vector<int>v={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int numCount=v.size()/2;

    // better solution.

    // for(int i=0;i<v.size();i++){
    //       mpp[v[i]]++;
    // }
    // for(auto it:mpp){
    //     if(it.second>numCount){
    //         cout<<"element is : "<<it.first<<endl;
    //     }
    // }

    //optimal solution.
    
}