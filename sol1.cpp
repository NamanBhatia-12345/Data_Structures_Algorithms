#include <iostream>
#include <vector>
using namespace std;
const int mod = 1e9 + 7;
int main() {
    int  n ;
    cin >> n;
    vector<int > fib(n+2,0);
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i <= n+1; i++){
        fib[i] = ((fib[i-1] % mod) + (fib[i-2] % mod)) % mod;

    }
    cout << fib[n+1] << " ";
}