#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    string str="isha";
    int arr[26]={0};
    for(int i=0;i<str.size();i++){
        arr[str[i]-97]++;
    }
    int max=INT_MIN;
    int index=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    cout<<"the count of char is : "<<max<<endl;
    cout<<"the char is : "<<char(index+97);
}