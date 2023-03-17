#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
  int n;
  cin >> n;
  if(n == 1){
    cout << "1\n";
    return;
  }
  if(n == 2 or n == 3){
    cout << "NO SOLUTION\n";
    return;
  }
  if(n == 4){
    cout << "2 4 1 3\n";
  }
  vector<int> t1,t2;
  for(int i=1;i<=n;i++){
    if(i % 2 == 0)
      t1.push_back(i);
    else
      t2.push_back(i);  
  }
  reverse(begin(t1),end(t1));
  reverse(begin(t2),end(t2));
  for(int i : t1){
    cout << i << " ";
  }
  for(int i : t2){
    cout << i << " ";
  }
  cout << "\n";
}
int main()
{
ios;
solve();
return 0;
}