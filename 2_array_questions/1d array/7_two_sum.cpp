#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={2,11,7,15,14};
    vector<int>result;
    int target=22;
    int start=0;
    int end=v.size()-1;
    sort(v.begin(),v.end());
    while(start<end){
        int sum=v[start]+v[end];
        if(sum==target){
            result.push_back(start);
            result.push_back(end);
            break;
        }
        if(sum>target){
            end--;
        }else{
            start++;
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<",";
    }
}