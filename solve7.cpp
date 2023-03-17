#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    set<int> mp;
    int ans;
    int res;
    for(int i=0;i<n;i++){   // O(n*n)
        for(int j=i+1;j<n;j++){
            ans = __gcd(arr[i],arr[j]);
            mp.insert(ans);
        }
    }
    vector<int> temp;
    for(auto itr : mp){
        if(itr == 1)
          continue;
        else
           temp.push_back(itr);
    } 
    if(temp.size() == 0 || temp[0] > 2){
        cout << "2\n";
        return;
    } 
    if(temp.size() == 1){
        if(temp[0] > 2)
          cout << "2\n";
        else
          cout << "3\n";
        return;    
    }
    bool flag = false;
    for(int i=1;i<temp.size();i++){
        if(temp[i] - temp[i-1] == 1){
              flag = true;
              continue;
        }
        else{
            flag = false;
            ans = temp[i-1] + 1;
            break;
        }
    }
    if(flag == true)
      ans = temp[temp.size()-1] + 1;
    cout << ans << endl;  
}
int main()
{
ios;
solve();
return 0;
}