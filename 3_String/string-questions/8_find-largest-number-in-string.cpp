#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int index=-1;
    vector<string>vs={"0123","0023","456","00182","00940","002901"};
    for(int i=0;i<vs.size();i++){
        int temp=stoi(vs[i]);
        if(temp>max){
            max=temp;
            index=i;
        }
    }
    cout<<"max is : "<<vs[index]<<endl;
}