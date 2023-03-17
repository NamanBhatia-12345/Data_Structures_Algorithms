#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
vector<string> mp;
void find_palindromes_in_sub_string(const string& input, int j, int k) {
  int count = 0;
  for (; j >= 0 && k < input.length(); --j, ++k) {
    if (input[j] != input[k]) {      
      break;
    } 
    mp.push_back(input.substr(j, k - j + 1));
    ++count; 
  }
}
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
      cin >> arr[i];
    for (int i = 0; i < n; ++i) {    
    find_palindromes_in_sub_string(str, i - 1, i + 1);
    find_palindromes_in_sub_string(str, i, i + 1);
  }
  ll ans=0,res;
  vector<int> lp;
  for(int i=0;i<mp.size();i++){
      lp.push_back(mp[i].size());
  }
  for(int i=0;i<lp.size();i++)
    cout << mp[i] << " ";
  cout << "\n";  
  for(int i=0;i<m;i++){
      if(arr[i]==1){
        ans+=n;  
        continue;
      }
      res = count(lp.begin(),lp.end(),arr[i]);
      ans += res;
  }  
  cout << ans;

}
int main()
{
ios;
solve();
return 0;
}