#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={4,4,4,4,4};
    int ans=-1;
    int target=4;
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            if(mid>0 && arr[mid-1]==target){
                high=mid-1;
            }else{
                break;
            }
            
        }else if(arr[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans;
}