#include <iostream>
#include <climits>
using namespace std;

int largestRowSum(int arr[][3] , int n , int m)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0 ; row < 3 ; row++)
    {
        int sum = 0;
        for(int col =0 ; col < 3 ; col++){
            sum += arr[row][col];
        }
        //cout << sum << endl;

        if(sum > maxi){
            maxi =sum;
            rowIndex = row ;
        }
    }
    return rowIndex;

}

void colSum(int arr[][3] , int n , int m)
{

    for(int col = 0 ; col < 3 ; col++)
    {
        int sum = 0;
        for(int row =0 ; row < 3 ; row++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }   
}

int main(){
    
    int arr[3][3];

    for(int row = 0 ; row < 3 ; row++){
        for(int col =0 ; col < 3 ; col++){
            cin>>arr[row][col];
        }
    }

    for(int row = 0 ; row < 3 ; row++){
        for(int col=0 ; col < 3 ; col++){
            cout<<arr[row][col]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Largest Row sum: ";
    cout<<largestRowSum(arr , 3, 3)<<endl;

    cout<<"Column wise sum: "<<endl;
    //colSum(arr,3,3);

    return 0;
}