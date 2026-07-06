#include<iostream>
#include<vector>
using namespace std;
 void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
//this is first method...

// int main(){
//     int zero=0;
//     int non_zero=0;
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     // counting how much zero and ones in array.
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             zero++;
//         }else{
//             non_zero++;
//         }
//     }
//     //now putting the 0 and 1 first put 0 then 1.
//     for(int i=0;i<v.size();i++){
//        if(i<non_zero){
//         v[i]=0;
//        }else{
//         v[i]=1;
//        }
       
//     }
//     print(v);
// }

//this is second method...
int main(){
     vector<int> v;
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        cout<<"before sorting ..."<<endl;
        print(v);
        cout<<endl;
        int start=0;
        int end=v.size()-1;
        while(start<end){
            if(v[start]==0){
                start++;
            }else if(v[end]==1){
                end--;
            }else{
                swap(v[start],v[end]);
            }
        }
        cout<<"after swaping .."<<endl;
        print(v);
}