#include<iostream>
using namespace std;
void printMatrix(int *resultMatrix,int row1,int column1){
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<resultMatrix[i*column1+j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row1,column1,row2,column2; 
    cout<<"enter the row for matrix 1 : ";
    cin>>row1;
    cout<<"enter the column for matrix 1 : ";
    cin>>column1;
     cout<<"enter the row for matrix 2 : ";
    cin>>row2;
    cout<<"enter the column for matrix 2: ";
    cin>>column2;
    if(row1!=row2 || column1!=column2){
        cout<<"addition is not possible...";
        return 0;
    }
    int matrix1[row1][column1];
    int matrix2[row2][column2];
    cout<<"now enter the value for matrix 1 : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"now enter the value for matrix 2 : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>matrix2[i][j];
        }
    }
    cout<<"now result calculation is started...";
    cout<<endl;
    int resultMatrix[row1][column1];
        for(int i=0;i<row1;i++){
            for(int j=0;j<column1;j++){
                resultMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
    printMatrix(&resultMatrix[0][0],row1,column1);


}