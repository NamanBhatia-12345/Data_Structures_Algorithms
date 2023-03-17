#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> arr(4,0);
    int cnt = 0;
    bool fg = true;
    for(int i=0;i<n;i++){
        if(str[i] == 'T')
              cnt++;
        else if(str[i] == 'i')      
           arr[0]++;
        else if(str[i] == 'm') 
          arr[1]++;
        else if(str[i] == 'u')
          arr[2]++;
        else if(str[i] == 'r')
          arr[3]++;
        else{
            fg = false;
            break;
        }        
    }
    if(cnt == 0 || cnt > 1 || fg == false){
        cout << "NO\n";
        return;
    }
    if(arr[0] == 1 && arr[1] == 1 && arr[2] == 1 && arr[3] == 1 && cnt == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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