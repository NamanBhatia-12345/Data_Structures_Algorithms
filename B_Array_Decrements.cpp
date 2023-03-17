#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    if(n == 1){
        if(arr1[0] >= arr2[0]){
            cout << "YES\n";
            return;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr1[i] >= arr2[i])
          flag = true;
        else{
            flag = false;
            break;
        }  
    }
    if(flag == false){
        cout << "NO\n";
        return;
    }
    int cnt = 0;
    for(int i : arr1){
        if(i == 1)
          cnt++;
    }
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr1[i] == 1 || arr1[i] == 0)
          continue;
        else{
            temp.push_back(arr1[i] - arr2[i]);
        }  
    }
    sort(temp.begin(),temp.end());
    if((temp[0] == temp[temp.size()-1]) && temp[0] != 0){
        cout << "YES\n";
    }
    else if((temp[0] == temp[temp.size()-1]) && (temp[0] == 0) && (cnt == 0)){
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