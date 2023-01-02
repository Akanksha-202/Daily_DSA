#include <iostream>
using namespace std;

int main()
{
    int den, val, n;
    cin >> den;

    cout << "Enter the denomination you want to start with: ";
    cin >> val;

    switch (val)
    {
    case 100:
        n = den / 100;
        den = den % 100;
        cout << n << " Notes of Rs100"<<endl;

    case 50:
        n = den / 50;
        den = den % 50;
        cout << n << " Notes of Rs50"<<endl;

    case 20:
        n = den / 20;
        den = den % 20;
        cout << n << " Notes of Rs20"<<endl;

    case 10:
        n = den / 10;
        den = den % 10;
        cout << n << " Notes of Rs10"<<endl;

    case 1:
        n = den;
        cout << n << " Notes of Rs1"<<endl;
    }


    return 0;
}