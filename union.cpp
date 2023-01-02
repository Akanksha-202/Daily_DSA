#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    // code here
    int count;
    sort(a, a + n);
    sort(b, b + n);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            count++;
            i++;
            j++;
        }

        else
        {
            count = count + 2;
            i++;
            j++;
        }
    }
    while (i < n)
    {
        count++;
        i++;
    }
    while (j < m)
    {
        count++;
        j++;
    }
    return count;
}

int main(){
    
    return 0;
}