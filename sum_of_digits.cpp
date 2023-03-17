#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int calculate_digits(int n){
    int sum = 0;
    if(n < 10)
       return n;
    else{
        int x = n;
        while(x != 0){
            sum += (x % 10);
            x /= 10;
        }
        n = sum;
        return calculate_digits(n);
    }   
}
void solve(){
    int n;
    cin >> n;
    int ans = calculate_digits(n);
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}