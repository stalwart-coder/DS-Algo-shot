#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums={19,12,23,8,16};
    vector<int>temp=nums;
    sort(temp.begin(),temp.end());
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[i]==temp[j]){
                nums[i]=j;
                break; 
            }
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}