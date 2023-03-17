#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
int sumPrime(int rangeLeft,int rangeRight){
    vector<int> val;
    int ans = 0;
    for(int i = rangeLeft; i <= rangeRight; i++){
        if(i < 0){
           if(calculate_prime(i*(-1)) == -1)
             continue;
           else
             val.push_back(i);   
        }
        else{
            if(calculate_prime(i) == -1)
              continue;
            else
              val.push_back(i);  
        }
    }
    int n = val.size();
    if(n == 0)
      return 0;  
    ans = val[0] + val[n-1];
    for(int i=0;i<n;i++)
      cout << val[i] << " ";
    cout << "\n";  
    return ans;
}
int main()
{
//ios;
int rangeLeft, rangeRight;
cin >> rangeLeft >> rangeRight;
int ans = sumPrime(rangeLeft,rangeRight);
cout << ans << "\n";
return 0;
}
