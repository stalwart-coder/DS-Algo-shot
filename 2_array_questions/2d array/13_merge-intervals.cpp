#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector< int >>vi={{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector< vector<int> > result;
    for(int i=0;i<vi.size();i++){
        int start=vi[i][0];
        int end=vi[i][1];
        if(!result.empty() && end<=result.back()[1]){
            continue;
        }
        for(int j=i+1;j<vi.size();j++){
            if(vi[j][0]<=end){
                end=max(end,vi[j][1]);
            }else{
                break;
            }
        }
        result.push_back({start,end});
    }
//    printing the result array.
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}