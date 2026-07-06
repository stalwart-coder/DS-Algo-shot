// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int k=0;
//         for(int j=0;j<n;j++){
//             int l=0;
//             if(k<i){
//                 cout<<" ";
//                 k++;
//             }
//             else if(l<n-i){
//                 cout<<"* ";
//                 l++;
//             }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}