#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    vector<string> arr;
    string s = "";
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            if(i != j){
                s += i;
                s += j;
                arr.push_back(s);
                s = "";
            }
        }
    }
    int n = arr.size();
    int ans = -1;
    for(int i=0;i<n;i++){
        if(str == arr[i]){
            ans = (i + 1);
            break;
        }
    }  
    cout << ans << "\n"; 
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