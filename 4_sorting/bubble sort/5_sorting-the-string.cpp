//here we have to first remove the characters which is less then X then we have to sort in decreasing order;
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="AABBCCDDZZYYYXMZ";
    string str;
    //first we push greater and X in new String
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<"before sorting "<<endl;
    cout<<str;
    cout<<endl;
    //now sorting in decreasing order
    for(int i=0;i<str.length()-1;i++){
        for(int j=str.length()-1;j>0;j--){
            if(str[j]>str[j-1]){
                swap(str[j],str[j-1]);
            }
        }
    }
    cout<<"after sorting : "<<endl;
    cout<<str<<endl;
}