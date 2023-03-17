#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int x = 0, y = 0; 
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int odd = 0, even = 0;
    for(int i : arr){
        if(i % 2 == 0)
          even++;
        else
          odd++;  
    }  
    if(odd >= 3){
        cout << "YES\n";
        for(int i=0;i<n;i++){
            if(arr[i] % 2 != 0 and x != 3){
              cout << i + 1 << " ";
              x++;
            }
        }
        cout << "\n";
    }
    else if(even >= 2 and odd >= 1){
        cout << "YES\n";
        for(int i=0;i<n;i++){
            if(arr[i] % 2 == 0 and y != 2){
                cout << i + 1 << " ";
                y++;
            }
            if(arr[i] % 2 != 0 and x != 1){
                cout << i + 1 << " ";
                x++;
            }
        }
        cout << "\n";
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