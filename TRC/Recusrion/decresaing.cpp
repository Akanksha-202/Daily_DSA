#include <iostream>
using namespace std;

void decreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}

int main(){
    int num;
    cout<<"Enter the starting number: ";
    cin>>num;
    decreasing(num);
    return 0;
}