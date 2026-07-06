#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="abcdefghij";
    int index=s.size()/2;
    cout<<"before reversing : "<<endl;
    cout<<s<<endl;
    reverse(s.begin(),s.begin()+index);
    cout<<"after reversing : "<<endl;
    cout<<s;
}