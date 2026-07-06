#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int n){
    int binaryNum=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        binaryNum=bit*pow(10,i++)+binaryNum;
        n=n/2;
    }
    return binaryNum;
}
int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;
    int result=decimalToBinary(n);
    cout<<"binary is : "<<result<<endl;
}