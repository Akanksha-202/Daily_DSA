// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];

//     fill_n(arr, 5, 2);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << "  ";
//     }

//     cout << endl;

//     int length;
//     length = sizeof(arr) / sizeof(int);
//     cout << length;

//     return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int get_max(int arr[], int size)
// {
//     int ele = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         ele = max(ele, arr[i]);
//         // if(ele<arr[i]){
//         //     ele = arr[i];
//         // }
//     }
//     return ele;
// }
// int get_min(int arr[], int size)
// {
//     int ele = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (ele > arr[i])
//         {
//             ele = arr[i];
//         }
//     }
//     return ele;
// }

// int main()
// {
//     int arr[5] = {24, 2, 64, 24, 45};
//     cout << get_max(arr, 5) << endl;
//     cout << get_min(arr, 5);

//     return 0;
// }

#include <iostream>
using namespace std;

int get_sum(int arr[], int n)
{
    int sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n,arr[100];
    cout << "Enter the length of array: ";
    cin>> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array is: " << get_sum(arr,n);
    return 0;
}