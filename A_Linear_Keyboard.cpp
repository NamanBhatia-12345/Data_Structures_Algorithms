#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string s1,s2;
    cin >> s1 >> s2;
    int m=s1.size(),n=s2.size();
    if(n==1){
        cout << "0\n";
        return;
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(s2[i]==s1[j])
            ans.push_back(j+1);
      }
    }
    int count=0;
    for(int i=1;i<ans.size();i++){
        count+=abs(ans[i]-ans[i-1]);
    }
    cout << count << "\n";
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