#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0 ; i <  n; i++){
        cout << arr[i]<<" ";
    }
    cout<< endl;
}

void selectionSort(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[500];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout<< "Enter the array elements: ";
    for(int i = 0 ; i <  n; i++){
        cin >> arr[i];
    }
    cout << "Actual (unsorted) Array: ";
    printArray(arr,n);
    selectionSort(arr,n);
    cout << "Sorted Array: ";
    printArray(arr,n);
    return 0;
}