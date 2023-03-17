#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    vector<char> vec = {'a','e','i','o','u','y','A','E','I','O','U','Y'};
    cin >> str;
    string ans = "";
    bool flag = false;
    for(char ch : str){
        for(int i=0;i<vec.size();i++){
            if(ch == vec[i]){
                flag = true;
                break;
            } 
        }
        if(flag){
          flag = false;  
          continue;
        }
        else{
            if(ch >= 65 && ch <= 90){
                char x = ch + 32;
                cout << "." << x;
                continue;
            }
            cout << "." << ch;
        }  
    }
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}