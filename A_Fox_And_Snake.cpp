#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m,'#'));
    bool fg = true;
    for(int i=0;i<n;i++){
        if(i % 2 != 0 and fg == true){
           fg = false;
           for(int j=0;j<m-1;j++)
              arr[i][j] = '.';
        }
        else if(i % 2 != 0 and fg == false){
            fg = true;
            for(int j=1;j<m;j++)
               arr[i][j] = '.';
        }
    }
    for(auto itr : arr){
        for(char i : itr){
            cout << i;
        }
        cout << "\n";
    }
}
int main()
{
ios;
solve();
return 0;
}