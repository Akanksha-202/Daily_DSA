#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
};

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // friend Complex sumComplex(complex o1, complex o2);
    // Friend making of one of the function(individually) of another class
    friend int calculator  ::sumRealComplex(complex, complex);
    //Entire class friend
    friend class calculator;


    void getNumber()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

// Complex sumComplex(complex o1, complex o2){
//     complex o3;
//     //cout<<a for point 6 of properties written below
//     o3.setNumber(o1.a+o2.a , o1.b+o2.b);
//     return 03;
// }

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    // sum = sumComplex(c1,c2);
    // sum.getNumber();

    calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    return 0;
}
/*
Properties of Friend function
1. Not in the scope of class
2. since it is not the scope of the class, it cannot be called from the object of that class, c1.sumComplex() ==Invalid
3. Can be invoked without the help of invoke.
4. Usually conatins the objects as arguments
5. CAN BE WRIITEN/DECLARED INSIDE THE PUBLIC OR PRIVATE SECTION OF CLASS.
6. It cannot access the mebers directly by their names and need object_name.member_name to acces any number
*/