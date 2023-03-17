#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int count=0;
    while(n!=0){
        if(n>=10){
            n=n-10;
            count++;
        }    
        if(n>=5&&n<10){
            n=n-5;
            count++;
        }
        if(n>=1&&n<5){
            n=n-1;
            count++;
        }
    }
    cout << count << "\n";
}
int main()
{
ios;
solve();
return 0;
}