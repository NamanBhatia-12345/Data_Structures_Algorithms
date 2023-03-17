#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(char *str){
    if(str == NULL)
      return;
    cout  << str ; 
    solve(str + 1);
    solve(str  + 1);
}
int main()
{
ios;
char str[] = "pqr";
solve(str);
return 0;
}