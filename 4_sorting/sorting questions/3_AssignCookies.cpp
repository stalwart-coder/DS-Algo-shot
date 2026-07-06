#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>g={1,2,2,3,4};
    vector<int>s={1,1,2,3};
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
        int count=0;
        int i=0;
        int j=0;
        while(i<s.size()&& j<g.size()){
            if(s[i]>=g[j]){
                count++;
                i++;
                j++;
            }else{
                i++;
            }
        }
        cout<<count<<endl;;
}