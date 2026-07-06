#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > matrix(3,vector<int>(4));
    matrix={
        {0,1,4,7,11,15},
        {1,2,5,8,12,19},
        {2,3,6,9,16,22},
        {3,10,13,14,17,24},
        {4,18,21,23,26,30},
    };
    int target=21;
    bool flag=false;
    // for(int i=0;i<matrix.size();i++){
    //     for(int j=matrix[0].size()-1;j>=0;j--){
    //         if(matrix[i][j]>target){

    //         }
    //     }
    // }
    int i=0;
    int j=matrix[0].size()-1;
    while(i<matrix.size() && j>=0){
        if(matrix[i][j]==target){
            flag=true;
            cout<<flag;
            return flag;
        }else if(matrix[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    cout<<"resul is : "<<flag;
}