

// C++ program to demonstrate
// explicit type casting

#include <iostream>
using namespace std;

int main()
{
    int x = 1;

    // Explicit conversion from double to int
    float sum = x + 1;

    cout << "Sum = " << sum << "\n";
    cout << sizeof(sum) << "\n";

    return 0;
}
