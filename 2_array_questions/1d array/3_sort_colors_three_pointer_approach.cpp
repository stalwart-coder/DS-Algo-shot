// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

//solution using Dutch National Flag algorithm or 3 pointers.

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
     vector<int> v;
        v.push_back(2);
        v.push_back(0);
        v.push_back(2);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        cout<<"before sorting "<<endl;
        print(v);
        int low=0;
        int mid=0;
        int high=v.size()-1;
        while(mid<=high){
            if(v[mid]==2){
                swap(v[mid],v[high]);
                high--;
            }else if(v[mid]==0){
                swap(v[mid],v[low]);
                low++;
                mid++;
            }else{
                mid++;
            }
        }
         cout<<endl;
        cout<<"after sorting "<<endl;
        print(v);
}