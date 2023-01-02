#include <iostream>
using namespace std;

int bin(int);

int main()
{
    int a, b;
    cin >> a >> b ;
    cout << bin(a) + bin(b);
    return 0;
}

int bin(int a)
{
    int digit;
    int count = 0;
    while (a != 0)
    {
        digit = a & 1;
        if (digit == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}