#include<iostream>
using namespace std;
int main(){
    int arr[]={6,3,3,2,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0])-1;
    int totalSum=0;
    int sum=(n*(n+1))/2;
    for(int i=0;i<=n;i++){
        totalSum+=arr[i];
    }
    cout<<"total sum is : "<<totalSum<<endl;
    cout<<"sum is : "<<sum<<endl;
    int dupliElement=totalSum-sum;
    cout<<"duplicate element is : "<<dupliElement<<endl;
}