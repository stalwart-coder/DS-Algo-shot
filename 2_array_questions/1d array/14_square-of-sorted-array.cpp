#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>result;
    vector<int>nums={-4,-1,0,3,10};
    for(int i=0;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
    }
    cout<<" now array is : "<<endl;
    int start=0;
    int end=nums.size()-1;
    while(start<=end){
        if(nums[start]>=nums[end]){
            result.push_back(nums[start]);
            start++;
        }else{
            result.push_back(nums[end]);
            end--;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<result[i]<<" ";
    }
    // int start=0;
    // int end=nums.size();
    // while(start<end){

    // }
}