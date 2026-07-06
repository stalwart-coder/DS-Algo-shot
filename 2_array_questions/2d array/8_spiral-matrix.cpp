#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>column;
    int arr[row][column];
    cout<<"enter the values for matrix ..";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the values for matrix ..";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int min_row=0;
    int min_col=0;
    int max_row=row-1;
    int max_col=column-1;
    while(min_row<=max_row && min_col<=max_col){
        //top row->left to right.
        for(int j=min_col;j<=max_col;j++){
            cout<<arr[min_row][j]<<",";
        }
        min_row++;
        // right column -> from top to bottom.
        if(min_col<=max_col){
            for(int j=min_row;j<=max_row;j++){
            cout<<arr[j][max_col]<<",";
            }
             max_col--;
        }
        // bottom row->right to left
        if(min_row<=max_row){
            for(int j=max_col;j>=min_col;j--){
            cout<<arr[max_row][j]<<",";
        }
        max_row--;
        }
        //left row - > bottom to top. 
        for(int j=max_row;j>=min_row;j--){
            cout<<arr[j][min_col]<<",";
        }
        min_col++;
    }
}