#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int m = str.length();
    int one = 0, zero = 0;
    for(int i=0;i<m;i++){
        if(str[i] == '1')
          one++;
        else
          zero++;  
    }
    if(one == 0 || zero == 0){
        cout << "-1\n";
        return;
    }
    int x = 0;
    unordered_set<int> st;
    for(int i=0;i<m;i++){
        if(str[i] == '1' and x < n){
          x++;
          st.insert(i+1);
        }
    }
    for(int i=0;i<m;i++){
        if(str[i] == '0' and x < n){
            x++;
            st.insert(i+1);
        }
    }
    vector<int> ans;
    for(auto itr = st.begin(); itr != st.end(); itr++)
      ans.push_back((*itr));
    sort(ans.begin(),ans.end());
    for(int l : ans){
        cout << l << " ";
    }  
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