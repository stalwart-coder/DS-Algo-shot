#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter the value of N : ";
    cin>>n;
    //for up pattern.
    for (int i=1;i<n+1;i++){
        for (int j=1;j<2*i;j++){
            if(j%2==0){
                cout<<"*";
            }else{
                cout<<i;
            }
            
        }
        cout<<endl;
    }
    //for down pattern.
    for (int i=0;i<n;i++){
        for (int j=0;j<2*n-(2*i+1);j++){
            if(j%2!=0){
                cout<<"*";
            }else{
                cout<<n-i; 
            }
           
        }
        cout<<endl;
    }
}