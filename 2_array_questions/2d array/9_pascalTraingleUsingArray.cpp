#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the row : ";
    cin>>row;
    int arr[row][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                arr[i][j]=1;
            }else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    cout<<"pascal traingle is : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}