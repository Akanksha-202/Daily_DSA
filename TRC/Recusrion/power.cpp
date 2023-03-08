#include <iostream>
using namespace std;

// int power(int x, int n){
//     if(n==0){
//         return 1;
//     }
//     return power(x,n-1)*x;
// }
int logarithmic(int x, int n){                              //Optimised
    if(n==1){
        return x;
    }
    if(n%2==0){
        return logarithmic(x,n/2)*logarithmic(x,n/2);
    }
    else if(n%2!=0){
        return logarithmic(x,n/2)*logarithmic(x,n/2)*x;
    }
}

int main(){
    int base,exp;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>exp;
    // int res = power(base,exp);
    // cout<<res;
    int res = logarithmic(base,exp);
    cout<<res;
    return 0;
}