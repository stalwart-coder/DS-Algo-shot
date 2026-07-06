//we have to find majroity element that appears more then n/2 times
//for that we are going to use moore's voting algorithm that complexity is O(N).
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,7,5,7,5,7,1,5,7,5,5,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int element ;
    for(int i=0;i<size;i++){
        if(count==0){
            count=1;
            element=arr[i];
        }else if(element==arr[i]){
            count++;
        }else{
            count--;
        }
    }
    int count1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count1++;
        }
    }
    if(count1 > (size/2)){
        cout<<"majority element is : "<<element;
    }else{
        cout<<-1;
    }
}