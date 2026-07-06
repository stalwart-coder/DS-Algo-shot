#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int row1,column1,row2,column2;
    cout<<"enter the row for matrix 1 : ";
    cin>>row1;
    cout<<"enter the column for matrix 1 : ";
    cin>>column1;
    
    cout<<"enter the row for matrix 2 : ";
    cin>>row2;
    cout<<"enter the column for matrix 2 : ";
    cin>>column2;
    if(column1!=row2){
        cout<<"multipication not possible..";
        return 0;
    }
    int matrix1[row1][column1];
    cout<<"entering the value for matrix 1 : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"your matrix 1 is : "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int matrix2[row2][column2];
    cout<<"entering the value for matrix 2 : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>matrix2[i][j];
        }
    }
    cout<<"your matrix 2 is : ";
    cout<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    int result[row1][column2];
    for(int i=0;i<row1;i++){//i is for row iteration
        for(int j=0;j<column2;j++){//j is for column iteration
            result[i][j]=0;
            for(int k=0;k<column1;k++){//and k iterate inside every i and j;
                 result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
           
        }
    }
    //printing the matrix.
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}