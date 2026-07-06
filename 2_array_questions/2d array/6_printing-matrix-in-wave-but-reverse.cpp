#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>column;
    vector<vector<int>>v(row,vector<int>(column));
    cout<<"enter the value of matrix : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>v[i][j];
        }
    }
    cout<<"printing the matrix in reverse wave form  : ";
    cout<<endl;
     for(int i=row-1;i>=0;i--){
        if(i%2!=0){
            for(int j=0;j<column;j++){
                cout<<v[i][j]<<",";
            }   
        }else{
            for(int j=column-1;j>=0;j--){
                cout<<v[i][j]<<",";
            }
        }
        
    }
}