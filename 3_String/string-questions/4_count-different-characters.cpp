#include<iostream>
using namespace std;
int main(){
    // string str="abbcdeffghh";
    string str="a";
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str.size()==1){
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }else if(i==str.size()-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }else if (str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
    }
    cout<<"count is : "<<count;
}