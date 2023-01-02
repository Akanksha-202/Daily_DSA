#include <iostream>
using namespace std;

    int firstPosition(int arr[], int n, int k)
    {
        // Write your code here
        int start = 0;
        int end = n-1;
        int mid = start + ((end - start)/2);
        int ans = -1;
        //int last = -1;
        
        while(start<=end)
        {
            if(arr[mid]==k)
            {
            ans = mid;
            end = mid -1;
            }
            else if(k<arr[mid])
            {
                end = mid -1;
            }
            else if(k>arr[mid])
            {
                start = mid+1;
            }
            mid = start + ((end - start)/2);
        }
        
        return ans;

    }

    int lastPosition(int arr[], int n, int k)
    {
        // Write your code here
        int start = 0;
        int end = n-1;
        int mid = start + ((end - start)/2);
        int ansl = -1;
        //int last = -1;
        
        while(start<=end)
        {
            if(arr[mid]==k)
            {
            ansl = mid;
            start = mid +1;
            }
            else if(k<arr[mid])
            {
                end = mid -1;
            }
            else if(k>arr[mid])
            {
                start = mid+1;
            }
            mid = start + ((end - start)/2);
        }
        
        return ansl;

    }

int main(){
    int even[6] = {1,2,3,3,4,5};
    int one[1] = {3};
    int many [5] ={3,3,3,3,3};
    
    cout << "First occurence: "<<firstPosition(even,6,3);
    cout << "last occurence: "<<lastPosition(even,6,3);
    return 0;
}