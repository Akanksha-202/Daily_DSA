#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        //Creating Comstructor
        //Constructor is a special member function with same name as that of class
        //Used to initialized the objects of its class
        //Automatically invoked whenever an object id=s created

        complex(void); //Constructor Declaration
        void printNumber(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }

};
complex::complex(void){ //This is default constructor as it takes no arguments
    a = 10;
    b = 0;
}
int main(){
    complex c1;
    c1.printNumber();
    return 0;
}
/*Properties
1. It should be declared in public section 
2. They are automatically invoked
3. They cannot return values and do not have return types
4. Can have default arguments.
5. Cannot refer to address
*/