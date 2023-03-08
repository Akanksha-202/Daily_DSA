#include <iostream>
using namespace std;

void dispaly(int arr[] , int idx,int size){

    int length = size;
    if(idx==size){
        return;
    }
    
    cout<<arr[idx]<<endl;
    dispaly(arr,idx+1,length);
} 

int main(){
    int index;
    cout<<"Enter index: ";
    cin>>index;
    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    dispaly(arr,index,size);
    return 0;
}