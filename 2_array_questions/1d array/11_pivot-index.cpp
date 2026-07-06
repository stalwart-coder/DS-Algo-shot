#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,4,7,3,6,5,6};
    int leftSum=0;
    int totalSum=0;
    int rightSum=0;
    for(int i=0;i<nums.size();i++){
        totalSum+=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        rightSum=totalSum-leftSum-nums[i];
        if(leftSum==rightSum){
            cout<<"index is : "<<i<<endl;
            break;
        }
        leftSum+=nums[i];
    }
    cout<<"-1"<<endl;
}