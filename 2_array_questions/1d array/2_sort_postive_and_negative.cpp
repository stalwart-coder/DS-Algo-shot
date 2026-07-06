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
        v.push_back(1);
        v.push_back(-2);
        v.push_back(2);
        v.push_back(5);
        v.push_back(-5);
        v.push_back(10);
        v.push_back(-7);
        v.push_back(9);
        cout<<"before sorting ..."<<endl;
        print(v);
        int start =0;
        int end=v.size()-1;
        while(start<end){
            if(v[start]<0){
                start++;
            }else if(v[end]>0){
                end--;
            }else {
                swap(v[start],v[end]);
                start++;
                end--;
            }
        }
        cout<<endl;
        cout<<"after sorting ..."<<endl;
        print(v);
}