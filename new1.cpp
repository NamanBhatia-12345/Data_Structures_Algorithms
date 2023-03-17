#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(int n,vector<int> &arr,int c){
    map <int,vector <int>> m;
    for(int i=0;i<arr.size();i++)
        m[arr[i]].push_back(i);
    set <vector<int>> s;
    for(int i=0;i<n-1;i++)
    {
        int p = arr[i] * arr[i+1];
        if(m[c/p].empty())
            continue;
        for(auto j : m[c/p])
        {
            int mi = min(min(i,j),i+1);
            int mx = max(max(i,j),i+1);
            int mid = (i+j+i+1) - (mi+mx);
            if(j != i && j != i+1)
                s.insert({mi,mid,mx});
        }
    }
    return s.size();
}
int main()
{
ios;
int n;
cin >> n;
vector<int> arr(n);
for(int i=0;i<n;i++)
  cin >> arr[i];
int k;
cin >> k;  
cout << solve(n,arr,k) << "\n";
return 0;
}