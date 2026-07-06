#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of N : ";
    cin>>n;
    // for printing upper left side star pattern.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
         //again for main or middle spaces.
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //downwanrd pattern.
     // for printing down left side star pattern.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
         //again for main or middle spaces.
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<" ";
        }
        // for printing right pattern.
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}