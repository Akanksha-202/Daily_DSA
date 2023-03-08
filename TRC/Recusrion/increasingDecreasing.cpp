#include <iostream>
using namespace std;

// void decreasing(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     decreasing(n-1);
// }

// void increasing(int n){
//     if(n==0){
//         return;
//     }
//     increasing(n-1);
//     cout<<n<<endl;

// }

void incdec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    incdec(n-1);
    cout<<n<<endl;
}

int main(){
    int num;
    cout<<"Enter the starting number: ";
    cin>>num;
    // decreasing(num);
    // increasing(num);
    incdec(num);
    return 0;
}