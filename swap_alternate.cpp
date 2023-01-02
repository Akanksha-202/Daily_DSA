#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

swap_alt(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i=i+2)
    {
        if (arr[i] == arr[n - 1])
        {
            break;
        }

        else
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int n;
    int arr[200];

    cout<<"Enter length of array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swap_alt(arr, n);
    printArray(arr,n);

    return 0;
}