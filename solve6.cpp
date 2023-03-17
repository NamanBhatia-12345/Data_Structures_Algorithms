#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
long triplets(long t, vector<int> d)
{
    long res = 0;
    sort(d.begin(),d.end());
    for (int i = 0; i < d.size(); i++) {
        for (int j = i + 1; j < d.size(); j++) {
            int firstNumber = d[i];
            int secondNumber = d[j];
            int temp = t - firstNumber - secondNumber;
            if ((firstNumber < secondNumber) && (secondNumber < temp))  {
                bool index = binary_search(d.begin(), d.end(), temp);
                if(index == true)
                  res++;
            }
        }
    }    
    return res;
}
int main()
{
ios;
long t;
cin >> t;
int n;
cin >> n;
vector<int> v1(n);
for(int i=0;i<n;i++)
  cin >> v1[i];
// vector<int> a1 = triplets(t,v1);  
// for(int x : a1)
//   cout << x << " ";
cout << triplets(t,v1);
return 0;
}