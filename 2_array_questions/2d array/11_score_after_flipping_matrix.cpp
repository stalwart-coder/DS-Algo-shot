#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector< vector<int> > grid(3,vector<int>(4));
    grid={
        {0,0,1,1},
        {1,0,1,0},
        {1,1,0,0},
    };
    // this loop do 1 ko 0 and 0 ko 1 in row.
    for(int i=0;i<grid.size();i++){
        if(grid[i][0]==0){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    grid[i][j]=1;
                }else{
                    grid[i][j]=0;
                }   
            }
        }
    }
    // this loop do 1 ko 0 and 0 ko 1 in column.
    for(int j=0;j<grid[0].size();j++){
        int numOfZero=0;
        int numOfOnes=0;
    // this loop counts total 0 and 1
        for(int i=0;i<grid.size();i++){
            if(grid[i][j]==1){
                numOfOnes++;
            }else{
                numOfZero++;
            }
        }
        if(numOfOnes<numOfZero){
            for(int i=0;i<grid.size();i++){
                if(grid[i][j]==0){
                    grid[i][j]=1;
                }else{
                    grid[i][j]=0;
                }
            }
        }
    }
    // total maximum sum calculate krne wala loop
    int totalSum=0;
    for(int i=0;i<grid.size();i++){
        int sum=0;
        int mul=1;
        for(int j=grid[0].size()-1;j>=0;j--){
            sum+=grid[i][j]*mul;
            mul*=2;
        }
        totalSum+=sum;
    }
        cout<<"total sum is : " <<totalSum;
    }
        