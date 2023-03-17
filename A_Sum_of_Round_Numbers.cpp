#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n <= 10){
        cout << "1" << "\n" << n << "\n";
        return;
    }
    vector<int> arr;
    int val = 0; 
    while(n != 0){
        if(n % 10 == 0)  n /= 10;
        else{
           int cs = (n % 10) * (int)(pow(10, val) + 0.5);
           arr.push_back(cs);
           n /= 10;
        }
        val++;
    }
    cout << arr.size() << "\n";
    for(int i : arr)
        cout << i << " ";
    cout << "\n";
}
int main()
{
ios;
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}