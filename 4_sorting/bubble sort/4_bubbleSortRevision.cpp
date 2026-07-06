#include<iostream>
using namespace std;
int main(){
    bool flag=false;
    int arr[]={0,1,2,3,4,5,6,7};
    int size=8;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            cout<<"direct a gya hu "<<endl;
            break;
            
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}