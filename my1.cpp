#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int getMinimumTrips(vector<int> weights){
    int n = weights.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
      mp[weights[i]]++;
    int ans = 0;
    for(auto itr : mp){
        if(itr.second % 3 == 0)
          ans += (itr.second / 3);
        else if(itr.second % 2 == 0) 
          ans += (itr.second / 2);
        else
           return -1;   
    }  
    return ans;

}
int main()
{
ios;
int n;
cin >> n;
vector<int> arr(n);
for(int i=0;i<n;i++)
  cin >> arr[i];
cout << getMinimumTrips(arr) << endl;
return 0;
}