#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    cout<<"transposing start .." <<endl;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            if(i!=j){
                swap(matrix[i][j],matrix[j][i]);
            }else{
                continue;
            }
        }
    }
    cout<<"printing of matrix .";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}