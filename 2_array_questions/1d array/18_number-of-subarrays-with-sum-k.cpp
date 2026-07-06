#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,-3,1,1,1,4,2,-3};
    int n=v.size();
    int target=3;
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int j=i;
        while(j<n){
            sum+=v[j];
            if(sum==target){
                count++;
            }
            j++;
        }
    }
    cout<<"count is : "<<count;
}