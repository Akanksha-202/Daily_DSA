#include <iostream>
using namespace std;

int main(){
    int marks[]={23,44,51,2};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    // int i=0;
    // while(i<4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    // do
    // {
    //     cout<<marks[i]<<endl;
    // } while (i<4);
    
    //Arrays and Pointers
    int* p = marks;
    cout<<"Value at p "<<*(p+1)<<endl;

    
    return 0;
}