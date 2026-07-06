#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>a;
    vector<int>b;
    vector<int>c;
    a.push_back(2);
    a.push_back(3);
    a.push_back(6);
    a.push_back(7);
    a.push_back(10);
    b.push_back(1);
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if( a[i]<b[j]){
            c.push_back(a[i]);
            i++;
            k++;
        }else{
            c.push_back(b[j]);
            j++;
            k++;
        }
    }
    while(i<a.size()){
        c.push_back(a[i]);
        k++; 
        i++;
    }
    while(j<b.size()){
        c.push_back(b[j]);
        k++;
        j++;
    }

    print(c);
}