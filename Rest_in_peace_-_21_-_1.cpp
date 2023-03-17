#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    int x = n;
    if(n % 21 == 0){
        cout << "The streak is broken!\n";
        return;
    } 
    else{
        while(x != 0){
            arr.push_back(x%10);
            x = x/10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if((arr[i] == 1) && (arr[i-1] == 2)){
                cout << "The streak is broken!\n";
                return;
            }
        }
        cout << "The streak lives still in our heart!\n";
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