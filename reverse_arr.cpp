#include <iostream>
using namespace std;

// 23 42 12 -> 12 42 23
void rev(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {23, 47, 36, 93, 2};
    int brr[6] = {95, 47, 6, 95, 23, 76};

    rev(arr, 5);
    rev(brr, 6);

    printArray(arr, 5);
    cout << endl;
    printArray(brr, 6);
    cout << endl;

    return 0;
}