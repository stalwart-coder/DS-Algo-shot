#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>nums1={55,30,5,4,2};
    vector<int>nums2={100,20,10,10,5};
    int maximum=INT_MIN;
    int i=0;
    int j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j]){
            int temp=j-i;
            maximum =max(temp,maximum);
            j++;
        }else{
            i++;
            j=i;
        }
    }
    cout<<"maximum is : "<<maximum<<endl;
}
