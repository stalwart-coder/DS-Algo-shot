//in this code we have to find lower bound of 17 means if 17 present in the array to 15 ke bad hota .
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,4,5,6,7,8,12,15,30,40,45};
    int target=12;
    int start=0;
    int end=arr.size()-1;
    int temp;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<target){
            temp=arr[mid];
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            temp=arr[mid-1];
            break;
        }
    }
    cout<<"temp : "<<temp;
}