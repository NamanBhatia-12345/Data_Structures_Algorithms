#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int one = 0, cnt = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '0')
          cnt = 0;
        else{
            cnt++;
            one = max(one,cnt);
        }  
    }
    if(str[0] == '1'){
       stack<char> st;
       st.push('1');
        for(int i=1;i<n;i++){
            if(str[i] == st.top())
              continue;
            else
                st.push(str[i]);
        }
        if(st.size() == 4 || st.size() == 3){
            cnt = 0;
            for(int i=0;i<n;i++){
                if(str[i] == '1')
                  cnt++;
            }
        }
        one = max(one,cnt);
    }
    cout << one << "\n";
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