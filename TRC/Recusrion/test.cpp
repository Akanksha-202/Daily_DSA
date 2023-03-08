#include <iostream>
using namespace std;

void test(int n){
    if(n==0){
        return;
    }

    cout<<"Pre "<<n<<endl;
    test(n-1);
    cout<<"In "<<n<<endl;
    test(n-1);
    cout<<"Post "<<n<<endl;
}

int main(){
    int num;
    cout<<"Enter the starting number: ";
    cin>>num;
    test(num);
    return 0;
}