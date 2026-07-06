#include<iostream>
using namespace std;
int sqrt(int x){
    int result;
    int low=0;
    int high=x/2;
    while(low<=high){
        int mid=low+(high-low)/2;
            if(mid*mid==x){
                result=mid;
                break;
            }else if(mid*mid<x){
                result=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
    }
    return result;
}
int main(){
    int x=0;
    int result=sqrt(x);
    cout<<"sqrt is : "<<result<<endl;
}