#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int prime_no(int n){
    int sum = 0;
    for(int i=1;i*i <= n;i++){
        if(n % i == 0){
            if((n / i) != i){
                sum += (n/i);
                sum += i;
            }
            else{
                sum += i;
            }
        }
    }
    return sum; 
}
int main()
{
ios;
int n;
cin >> n;
int ans = prime_no(n);
cout << ans << endl;
return 0;
}