#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(int i, vector<int> arr ,int n, int sum, int s){
    if(i == n){
        if(s == sum)
        return 1;
        else
        return 0;  
    }
    sum += arr[i];
    int left = solve(i + 1, arr, n, sum, s); 
    sum -= arr[i];
    int right = solve(i + 1, arr, n, sum, s);
    return left + right;

}
int main()
{  
ios;
int n,s;
cin >> n >> s;
vector<int> arr(n);
for(int i=0;i<n;i++)
  cin >> arr[i];  
cout << solve(0,arr,n,0,s) << "\n";
return 0;
}