#include <iostream>
using namespace std;

class Base1{
    public:
        greet(){
            cout<<"How?"<<endl;
        }
};
class Base2{
    public:
        greet(){
            cout<<"Why?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
};

class B
{
    public:
    void say(){
        cout<<"Helo"<<endl;
    }
};

class D : public B{
    int a;
    public:
        //D's say will override base class' say function  
        void say(){
            cout<<"Apna say h mere paas"<<endl;
        }
};

int main(){
    //Ambiguity 1
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // Derived a;
    // a.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}