#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    // cout << *a << " ";
    // cout << *b << " ";
    // cout << endl;
}
int main()
{
ios;
int a,b;
cin >> a >> b;
solve(&a,&b);
cout << a << " " << b << endl;
return 0;
}