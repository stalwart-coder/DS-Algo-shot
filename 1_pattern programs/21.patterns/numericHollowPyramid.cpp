#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //numbers
        int start=1;
        int end=1;
        for(int j=0;j<2*i+1;j++){
            //for first and last row..
            if(i==0 || i==n-1){
                if(j%2==0){
                    cout<<start;
                    start=start+1;
                }
                else{
                    cout<<" ";
                }
            }else{
                if(j==0){
                    cout<<j+1;
                }else if(j==2*i){
                    cout<<i+1;
                }else{
                    cout<<" ";
                }
              }     
            } 
        cout<<endl;

    }
}