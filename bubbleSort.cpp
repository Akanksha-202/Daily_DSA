#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) //i=0->n-1
    {
        for (int j = 0; j < n-i ; j++)  //j=0->n-i-1
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[500];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Actual (unsorted) Array: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);
    return 0;
}

//t.c = O(n^2)
//best case O(n)
//worst = O(n^2 )