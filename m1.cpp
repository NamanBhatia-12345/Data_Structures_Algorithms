#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(int a,int b,int i){
    if(i == b)
      return a;   
    return solve(a + i,b,i+1);  
}
int main()
{
ios;
int a,b;
cin >> a >> b;
cout << solve(a,b,0) << endl;
return 0;
}