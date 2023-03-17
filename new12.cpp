// #include <bits/stdc++.h>
// using namespace std;
// #define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
// #define ll long long
// #define mod 1000000007
// int solve(int a,int b,int n){
//     int l = 1 << n;
//     int i = 0;
//     int mx = INT_MIN;
//     int x1,x2;
//     while(i < l){
//         x1 = (a ^ i) % mod;
//         x2 = (b ^ i) % mod;
//         mx = max(mx,(x1*x2));
//         i++;
//     }
//     return mx;
// }
// int main()
// {
// ios;
// int a,b,n;
// cin >> a >> b >> n;
// cout << solve(a,b,n) << "\n";
// return 0;
// }


#include <iostream>
using namespace std;
#pragma pack(1)


void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

bool reverse(int j, int i,string &arr){
    if(i > j)
      return true;
    if(arr[i] != arr[j])
      return false;  
    return reverse(j-1,i+1,arr);  
}
int main(){
    string arr;
    cin >> arr;
    int n = arr.length();
    bool val = reverse(n-1,0,arr);
    if(val == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}