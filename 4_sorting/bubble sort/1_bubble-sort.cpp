#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : "<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // bubble sort
    cout<<"sorting is started.."<<endl;
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-(i+1);j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<"after sorting array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}