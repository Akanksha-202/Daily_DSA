// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     //Manipulators -> Controls the display of code
//     //1) endl under iostream header file 
//     //2) setw(int) under iomanip header file

//     int a=3, b=78, c=1223;
//     cout<<"The value of a without setw is "<<a<<endl;
//     cout<<"The value of b without setw is "<<b<<endl;
//     cout<<"The value of c without setw is "<<c<<endl;


//     cout<<"The value of a after using setw is "<<setw(4)<<a<<endl;
//     cout<<"The value of b after using setw is "<<setw(4)<<b<<endl;
//     cout<<"The value of c after using setw is "<<setw(4)<<c<<endl;

//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
    int l =10;
    int*p = &l;
    cout<<&l;
    cout<<p;
    return 0;
}