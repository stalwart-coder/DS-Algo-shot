#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str="AZYZXBDXJK";
    vector<char>s;
    for(int i=0;i<str.size();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
    cout<<"before sorting .."<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    for(int i=0;i<s.size()-1;i++){
        bool flag=false;
        for(int j=0;j<s.size()-(i+1);j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<endl;
    cout<<"after sorting .."<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}