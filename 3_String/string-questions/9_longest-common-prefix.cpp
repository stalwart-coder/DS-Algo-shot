#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>vs={"flower","flow","floight"};
    sort(vs.begin(),vs.end());
    int i=0;
    string first=vs[0];
    string last=vs[vs.size()-1];
    while(i<min(first.size(),last.size()) &&  first[i]==last[i]){
        i++;
    }
    cout<<"longest prefix is : "<<first.substr(0,i);
}