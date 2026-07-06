#include<iostream>
using namespace std;
int main(){
    int nums[]={0,1,0,3,12};
    int zeroIndex=-1;
    int nonZeroIndex=-1;
    int size=sizeof(nums)/sizeof(nums[0]);
    int i=0;
    int j=0;
    while(i<size){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
        i++;
    }
    for(int i=j;i<size;i++){
        nums[i]=0;
    }
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
}