#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    cin.ignore();
    char ch[n+1];
    cout<<"enter the value of string : "<<endl;
    cin.getline(ch,n+1);
    cout<<"string is : "<<ch<<endl;
    // counting the vowels
    cout<<"counting the vowels.."<<endl;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            count++;
        }
    }
    cout<<"total vowels is : "<<count<<endl;
}