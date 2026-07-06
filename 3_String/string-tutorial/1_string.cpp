#include<iostream>
using namespace std;
int main(){
    char ch='\0';
    cout<<ch;
    char ch1[]="123";
    cout<<(int)ch;
    cout<<endl;
    char ch2[10]={'a','b'};
    cout<<"ch2 is  : "<<(int)ch2[6];
    cout<<endl;
    string str="i am bhoot";
    cout<<"string is : "<<str;
    cout<<endl;
    string str1;
    // cin>>str1;
    getline(cin,str1);
    cout<<"str1 is : "<<str1;
}