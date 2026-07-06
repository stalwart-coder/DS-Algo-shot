// here we will find transpose of matrix.
#include<iostream>
using namespace std;
int main(){
    int row1,column1; 
    cout<<"enter the row for matrix 1 : ";
    cin>>row1;
    cout<<"enter the column for matrix 1 : ";
    cin>>column1;
    int matrix1[row1][column1];
    int result[column1][row1];
    cout<<"enter the value for matrix : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"matrix is : ";
    cout<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"now transpose matrix is : ";
    cout<<endl;
    for(int i=0;i<column1;i++){
        for(int j=0;j<row1;j++){
            result[i][j]=matrix1[j][i];
        }
    }
    for(int i=0;i<column1;i++){
        for(int j=0;j<row1;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}