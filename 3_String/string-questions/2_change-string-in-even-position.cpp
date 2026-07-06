#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : "<<endl;
    cin>>str;
    for(int i=0;i<str[i]!='\0';i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<"now string is : "<<str<<endl;
}