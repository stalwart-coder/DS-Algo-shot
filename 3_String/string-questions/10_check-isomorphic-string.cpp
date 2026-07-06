#include<iostream>
#include<vector>
using namespace std;
int main(){
    bool flag =true;
    string s="badc";
    string t="baba";
    vector<int>v(150,1000);
    for(int i=0;i<s.size();i++){
        int idx=int(s[i]);
        if(v[idx]==1000){
            v[idx]=s[i]-t[i];
        }else if(v[idx]!=s[i]-t[i]){
            flag= false;
        }
    }
    // emptying the vector.
    for(int i=0;i<v.size();i++){
        v[i]=1000;
    }
    for(int i=0;i<t.size();i++){
        int idx=int(t[i]);
        if(v[idx]==1000){
            v[idx]=t[i]-s[i];
        }else if(v[idx]!=t[i]-s[i]){
            flag= false;
        }
    }
    cout<<"ans is : "<<flag<<endl;
}