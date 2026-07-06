#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        //this will print left spaces.
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //this is for printing stars.
        for(int j=0;j<2*i+1;j++){
            if(j==0 || j==2*i){
                cout<<"* ";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    //this is for printing down pattern.
     for(int i=0;i<n;i++){
        //this is for printing spaces.
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //this will print stars.
        for(int j=0;j<2*n-(2*i+1);j++){
            if(j==0 || j==2*n-(2*i+1)-1){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }

}