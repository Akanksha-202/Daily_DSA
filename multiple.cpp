#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1 , public Base2
{
    public:
    void show(){
        cout<<"The value of base1 is"<<base1int<<endl;
        cout<<"The value of base2 is"<<base2int<<endl;
        cout<<"The sum is"<<base1int+base2int<<endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(20);
    harry.set_base2int(30);
    harry.show();
    return 0;
}