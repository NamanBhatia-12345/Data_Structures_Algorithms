#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    string str;
    cin >> str;
    int ones = 0, zeros = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '1')
          ones++;
        else
          zeros++;  
    }
    if(ones == 0 || zeros == 0){
        cout << "0\n";
        return;
    }
    if(x >= y){
        cout << y << "\n";
    }
    else{
        cout << x << "\n";
    }
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