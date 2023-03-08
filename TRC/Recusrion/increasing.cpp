#include <iostream>
using namespace std;

void increasing(int n){
    if(n==0){
        return;
    }
    increasing(n-1);
    cout<<n<<endl;

}

int main(){
    int num;
    cout<<"Enter the starting number: ";
    cin>>num;
    increasing(num);
    return 0;
}