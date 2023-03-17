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
    int x0 = 0, x1 = 0;
    for(int i : arr){
        if(i == 1)
          x1++;
        else
          x0++;  
    }  
    if(x1 >= 1){
        cout << "HARD\n";
    }else{
        cout << "EASY\n";
    }
}
int main()
{
ios;
solve();
return 0;
}