#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2,-1,-10,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        int minElement=INT_MAX;
        int min_index=-1;
        for(int j=i;j<size;j++){
            if(arr[j]<minElement){
                minElement=arr[j];
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    for(int element:arr){
        cout<<element<<" ";
    }
}