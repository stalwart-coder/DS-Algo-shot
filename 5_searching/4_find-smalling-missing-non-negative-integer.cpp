#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={0,1,3,4,5,9,10};
//method -1 using linear search O(n) time complexity

    // for(int i=0;i<arr.size();i++){
    //     if(i!=arr[i]){
    //         cout<<i;
    //         break;//loop breaak ho jayega
    //     }
    // }

// method -2 using binary search O(logn)
    int low=0;
    int high=arr.size()-1;
    int result;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid!=arr[mid]){
            result=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<result;
}