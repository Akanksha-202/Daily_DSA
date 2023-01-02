// nth term ?
#include <iostream>
using namespace std;

int fib(int a)
{
    int next;
    int first = 0;
    int second = 1;

    for (int i = 3; i <= a; i++)
    {
        next = first + second;
        first = second;
        second = next ;
    }
    return next;
}

int main()
{
    int a;
    cin >> a;

    cout << fib(a);
    return 0;
}

// 0 1 1 2 3 5 8 13