#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of N : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i+1;j++){
           cout<<(char)(j+65); 
        }
        j=j-1;
        //for reverse char
        for(;j>=1;j--){
            cout<<char(j+64);
        }
        
        cout<<endl;
    }
}