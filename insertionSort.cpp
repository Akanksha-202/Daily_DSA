#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0 ; i <  n; i++){
        cout << arr[i]<<" ";
    }
    cout<< endl;
}

// void insertionSort(int arr[], int n)
// {
//     for(int i = 1 ; i < n ; i++)
//     {
//         int temp = arr[i];
//         int j = i-1;
//         for (; j >= 0; j--)
//         {
//             if(arr[j] > temp)
//             {
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
        
//     }
// }

void insertionSort(int arr[],int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int temp= arr[i];
        int j = i-1;
        while(j>=0)
        {
            if(arr[j] > temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    cout << "Sorted Array: ";
    printArray(arr,n);
    return 0;
}

//T.C = O(n^2)
//Best Case = O(n)
//Worst case =O(n^2)
