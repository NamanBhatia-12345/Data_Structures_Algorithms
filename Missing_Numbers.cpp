#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int arr[4];
    for(int i=0;i<4;i++)
      cin >> arr[i];
    sort(arr,arr+4);
    int x,y;
    if(arr[0] < 0)
      x=arr[0];
    else
      x=arr[1];  
    y=arr[2];
    if(x+y % 2 != 0){
        cout << "-1 -1\n";
        return;
    }  
    int a = (x+y)/2,b = y-a;
    if(a-b == x && a*b == arr[3]){
        if(x == arr[0] && a/b == arr[1])
          cout << a << " " << b << "\n";
        else if(a/b == arr[0])
          cout << a << " " << b << "\n";  
    }
    else
       cout << "-1 -1\n";
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