#include<iostream>
using namespace std;
int main(){
    cout<<"enter the n : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<2*n+1;j++){
            // this is for left spaces..
            if(j<n-i-1){
                cout<<" ";
            }
            //this is for stars...
            else if(k<i+1){
                cout<<"* ";
                k++;
            }  
        }
        cout<<endl;
    }
}