#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long

// class Solution
// {
// public:
    int largest_number(vector<int> &arr,int n){
        int mx1 = arr[0], mx2 = INT_MIN, mx3 = INT_MIN;
        for(int i=1;i<n;i++){
            if(arr[i] > mx1)
              mx1 = arr[i];
        }
        for(int i=0;i<n;i++){
            if((arr[i] > mx2) && (arr[i] < mx1))
               mx2 = arr[i];
        }
        for(int i=0;i<n;i++){
            if((arr[i] > mx3) && (arr[i] < mx2))
               mx3 = arr[i];
        }
        if(mx3 == INT_MIN)
          return -1;
        return mx3;  
   }
// };





int main()
{
ios;
int n;
cin >> n;
vector<int> arr(n);
for(int i=0;i<n;i++)
    cin >> arr[i];
// Solution obj;
cout << largest_number(arr,n) << "\n";
return 0;
}