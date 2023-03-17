#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
string digits(int n){
    string res = "";
    while(n != 0){
        int x = n % 2;
        char t = x + '0';
        res.push_back(t);
        n = n / 2; 
    }
    reverse(res.begin(),res.end());
    return res;
}
int substrings(string str){
    string pt = "101";
    int m = pt.length();
    int n = str.length();
    int res = 0;
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str[i+j] != pt[j])
              break;
            if(j == m)
               res++;  
        }
    }
    return res;
}
void solve(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    string str = "";
    int cnt;
    for(int i=1;i<=n;i++){
        str = digits(i);
        cnt = substrings(str);
        if(cnt >= k)
          ans++;
    }
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}