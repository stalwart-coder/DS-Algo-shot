#include<iostream>
#include<vector>
using namespace std;
int uniquElement(vector<int> &v){
    int ans=0;
    for(int i=0;i<v.size();i++){
     ans=ans^v[i];//ans xor every element of vector.
    }
   return ans;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7,2,3,4,5,6,1};
    int ans=uniquElement(v);
    cout<<"unique element is : "<<ans;
}