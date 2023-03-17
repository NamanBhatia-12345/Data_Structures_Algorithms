#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << &a << " " << p << "\n";
    cout << &p << " " << q << "\n";
    cout << &q << "\n";
    cout << q << " " << *q << " " << **q << "\n";
    return 0;
}