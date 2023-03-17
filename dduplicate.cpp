#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
struct result{
    result() : output1(){};
    int output1[100];
};
void solve(int n, int arr[]){
    result res;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // map<int,int> :: iterator itr = mp.begin();
    int j = 0;
    // while(itr != mp.end()){
    //     if(itr->second > 1){
    //       res.output1[j] = itr->first;
    //       j++;
    //     }   
    //     itr++;
    // }
    for(auto itr : mp){
        if(itr.second > 1){
            res.output1[j] = itr.first;
            j++;
        }
    }
    for(int i=0;i<100;i++){
        if(res.output1[i] != 0)
        cout << res.output1[i] << " ";
    }
    //return res;
}
int main()
{
ios;
result ans;
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++)
  cin >> arr[i];
solve(n,arr);
// for(int i=0;i<100;i++)
//    if(ans.output1[i] != 0) 
//     cout << ans.output1[i] << " ";
cout << "\n";  
return 0;
}