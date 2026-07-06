#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int element:arr){
        cout<<element<<" ";
    }
}