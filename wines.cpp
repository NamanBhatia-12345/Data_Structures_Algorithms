#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(int i,vector<int> &arr, int j,int year){
    if(i > j)
      return 0;
    int ans1 = arr[i]*year + solve(i + 1,arr,j,year + 1);
    int ans2 = arr[j]*year + solve(i,arr,j - 1,year + 1);
    int ans = max(ans1, ans2);
    return ans;

}
int main()
{
ios;
int n; 
cin >> n;
vector<int> arr(n);
int ans = 0;
for(int i=0;i<n;i++)
  cin >> arr[i];  
int res = solve(0,arr,n-1,1);  
cout << res << "\n";
return 0;
}



