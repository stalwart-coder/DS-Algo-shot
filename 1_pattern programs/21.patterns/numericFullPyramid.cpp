#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of N : ";
    cin>>n;
    
  
    for(int i=0;i<n;i++){
        // for left spaces..
        for (int k=0;k<n-i-1;k++){
        cout<<" ";
        }
        for(int j=0;j<i+1;j++){
        cout<<i+j+1;
        }
        //for right logic..
        for(int l=2*i;l>i;l--){
            cout<<l;
        }
        cout<<endl;
    }
}