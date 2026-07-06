#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="abcdee";
    string t="dceba";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"string is anagrams.."<<endl;
    }else{
        cout<<"string is not anagrams.."<<endl;
    }

}