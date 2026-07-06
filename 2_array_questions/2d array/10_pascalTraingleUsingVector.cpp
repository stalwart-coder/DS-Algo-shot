#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    cout<<"enter the row : ";
    cin>>row;
    vector< vector<int> > v(row);
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i].push_back(1);
            }else{
                int val=v[i-1][j-1]+v[i-1][j];
                v[i].push_back(val);
            }
        }
    }
    cout<<"pascal traing is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}