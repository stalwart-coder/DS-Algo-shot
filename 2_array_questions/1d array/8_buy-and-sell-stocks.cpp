#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=6;
    int min_price=INT_MAX;
    int profit=-1;
    for(int i=0;i<n;i++){
        min_price=min(min_price,arr[i]);
        profit=max(profit,arr[i]-min_price);
    }
    cout<<"profit is : "<<profit<<endl;
}