#include <iostream>
using namespace std;

class Employee
{
    private: 
        int a, b, c;
    public:
        int d, e;
        void setData(int a,int b,int c);    //Declaration
        void getData(){
            cout<<"The value of a is: " <<a<<endl;
            cout<<"The value of b is: " <<b<<endl;
            cout<<"The value of c is: " <<c<<endl;
            cout<<"The value of d is: " <<d<<endl;
            cout<<"The value of e is: " <<e<<endl;
        
        };

};

class Binary{
    string s;
    void chk_bin(void);
    public: 
        void read(void);
        void ones(void);
        void display(void);
};

void Binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}
void Binary :: chk_bin(void){
    for (int i =0 ; i < s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary number"<<endl;
            exit(0);
        }


    }
}

void Binary :: ones(void){
    chk_bin();
    for (int i =0 ; i < s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }

    }
    
}
void Binary :: display(void){
    for (int i =0 ; i < s.length();i++)
    {
        cout<<s.at(i);
        
    }
    
}

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}



int main(){
    // Employee Harry;
    // Harry.setData(1,2,4);
    // Harry.d = 5;
    // Harry.e = 12;
    // Harry.getData();

    Binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();
    
    return 0;
}

/* OOPS
C++-->initially called -->C with classes
classs --> extension of structures (in C)
structures's limitation:
        --> members atre public
        --> No methods
classes = structures + more
classes --> can have methods and properties
classes --> can make few members as private or public
structures in c++ are typedefed
you can declare objects along with the class Declaration like
    class em{

    }em1,em2;

em1.deff = 7 makes no sense if deff is private variable

Nesting of Member function
*/

