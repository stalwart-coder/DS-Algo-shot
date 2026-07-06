#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v={5,3,1,1,-5,4,2};
    int n=v.size();
    int i=0;
    while(i<n-1){
        int min=INT_MAX;
        int min_index=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                min_index=j;
            }
        }
        swap(v[i],v[min_index]);
}