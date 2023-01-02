#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;    //4
    char favchar; //1
    float salary; //4
}ep;
// 4+4+1= 9 bytes of memory will be allocated for structure 

union money
{
    /* data */
    int rice;   //4
    char car;   //1
    float pounds;//4
};
//highest byte of memory i.e. 4 bytes of memory will be allocated to union amd only one of the data will be used at a time



int main(){
    ep harry;
    struct employee shubham;
    harry.eId=1;
    harry.favchar='D';
    harry.salary=124098930;

    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;


    union money m1;
    m1.rice=34;
    cout<<m1.rice<<endl;
    m1.car='c';
    cout<<m1.rice<<endl;//Garbage value since car data is in use now

    enum meal {breakfast, lunch, dinner};
    meal m2;
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    return 0;
}