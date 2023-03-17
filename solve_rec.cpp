#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int i = 0;
int sum = 0;
int solve(vector<int> &nums,int n){
    if(n == nums.size())
      return sum;
    sum += nums[n];  
    return solve(nums,n+1);  
}
int main()
{
ios;
int n;
cin >> n;
vector<int> nums(n);
for(int i=0;i<n;i++)
  cin >> nums[i]; 
int result;
result = solve(nums,0);
cout << result << "\n";
return 0;
}