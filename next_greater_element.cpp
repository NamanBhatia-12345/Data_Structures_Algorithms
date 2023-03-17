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
    vector<int> res;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                res.push_back(arr[j]);
                flag = true;
                break;
            }
        }
        if(flag == false)
          res.push_back(-1);
    }
    for(int x : res)
      cout << x << " ";
    cout << endl;       
}
int main()
{
ios;
solve();
return 0;
}