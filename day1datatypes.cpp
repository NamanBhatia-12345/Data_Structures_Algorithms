#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    cin >> a >> b;
    fflush(stdin);
    string c;
    getline(cin,c);
    int ans1 = i + a;
    double ans2 = d + b; 
    cout << ans1 << endl;
    cout << fixed << setprecision(1) << ans2 << endl;
    cout << s << c << endl;
    return 0;
}
