#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,3,1,4,2,5,5,2,1,1,3};
    int n=v.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
          }
        }
    cout<<"printing the sorted arry : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}