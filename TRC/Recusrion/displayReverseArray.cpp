#include <iostream>
using namespace std;

void dispalyRev(int arr[] , int idx,int size){

    int length = size;
    if(idx==size){
        return;
    }
    
    dispalyRev(arr,idx+1,length);
    cout<<arr[idx]<<endl;
} 

int main(){
    int index;
    cout<<"Enter index: ";
    cin>>index;
    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    dispalyRev(arr,index,size);
    return 0;
}