#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int> &a,vector<int> &b){
    vector<int>intrsec;
    int n1=a.size();
    int n2=b.size();
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                intrsec.push_back(a[i]);
            }
        }
    }
    return intrsec;
}
int main(){
    vector<int>a={1,2,3,4,5,6,7,8,9};
    vector<int>b={7,1,1,2,13,14,15,3};
    vector<int>result=intersection(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<",";
    }
    
}