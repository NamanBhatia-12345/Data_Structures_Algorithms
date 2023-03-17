#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void calculate(string &str, int x1, int x2){
    int len = ((x2 - x1 + 1) / 2);
    int i = x1, j = x2;
    while(i < len){
        swap(str[i] , str[j]);
        i++;
        j--;
    }
}
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int m;
    cin >> m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
      cin >> arr[i];
    for(int i=0;i<m;i++){
        int x = arr[i] - 1;
        int y = n - arr[i];
        calculate(str,x,y);
    }  
    cout << str << "\n";
}
int main()
{
ios;
solve();
return 0;
}