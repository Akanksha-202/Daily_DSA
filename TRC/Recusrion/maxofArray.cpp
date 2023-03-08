#include <iostream>
using namespace std;

int maxm(int arr[], int idx, int size){
    int length = size;
    if(idx==size){
        return -1;
    }

    int ans = maxm(arr,idx+1,length);
    return max(ans,arr[idx]);
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int index;
    cout<<"Enter index: ";
    cin>>index;
    cout<<maxm(arr,index,size);
    
    return 0;
}