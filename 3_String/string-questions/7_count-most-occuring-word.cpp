#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string str;
    cout<<"give the string : "<<endl;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    vector<string> vs;
    while(ss>>temp){
        vs.push_back(temp);
    }
    sort(vs.begin(),vs.end());
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }
    // calculating maximum
    int maxPro=INT_MIN;
    int count=1;
    for(int i=0;i<vs.size()-1;i++){
        if(vs[i]==vs[i+1]){
            count++;
        }else{
            count=1;
        }
        maxPro= max(maxPro,count);
    }
    // for word
     count=1;
    for(int i=0;i<vs.size()-1;i++){
        if(vs[i]==vs[i+1]){
            count++;
        }else{
            count=1;
        }
        if(count==maxPro){
            cout<<"the word is : "<<vs[i]<<endl;
        }
    }
    cout<<endl;
    cout<<"max is : "<<maxPro<<endl;
    
}