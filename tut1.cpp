#include<iostream>
using namespace std;

int c = 45;

int main(){
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    c=a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global value of c is "<<::c<<endl;   //To use global value of c use scope resolution operator (::)
    return 0;
}
 
