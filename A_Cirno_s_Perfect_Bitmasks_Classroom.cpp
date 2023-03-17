#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    int cnt = 0;
    int val = 1;
    int y = x;
    vector<int> res;
    if(x == 1)
        cout << "3\n";
    else if(x % 2 != 0)
        cout << "1\n";
    else{
        while(y % 2 == 0){
            cnt++;
            y /= 2;
        }
        while(cnt--)
          val *= 2;
        if(val == x){
            cout << (x+1) << "\n";
            return;
        }
        y = x;
        while(y != 0){
            if(y % 2 == 0)
              res.push_back(0);
            else
              res.push_back(1);
            y /= 2;    
        }
        for(int i=0;i<res.size();i++){
            if(res[i] == 1){
              cnt = i;
              break;
            }
        }
        val = 1;
        while(cnt--)
          val *= 2;
        cout << val << "\n";  
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