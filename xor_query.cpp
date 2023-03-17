#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr(n), q(m);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    for(int i=0;i<m;i++)
      cin >> q[i];
    vector<int> ans;
    for(int i=0;i<m;i++){
        int k = q[i];
        vector<int> temp(arr.begin(),arr.end()); //m*n
        for(int i=0;i<n;i++){            //m*n
            temp[i] = temp[i] ^ k;
        }
        bool fg = false;
        sort(temp.begin(),temp.end());  //nlogn
        if(temp[0] != 0)
          ans.push_back(0);
        else{   
        for(int i=1;i<n;i++){            // m*n
            if(temp[i] - temp[i-1] == 1)
              continue;
            else{
                ans.push_back(temp[i-1] + 1);
                fg = true;
                break;
              }  
            }
            if(fg == false){
                ans.push_back(temp[temp.size() - 1] + 1);
            }
        } 
        temp.clear();   // m*n
    }    
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
ios;
solve();
return 0;
}